using System;
using System.Drawing;
using System.IO;
using System.IO.Compression;
using System.Net;
using System.Net.Cache;
using System.Text.RegularExpressions;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
using ICSharpCode.SharpZipLib.Zip;
using Microsoft.Win32;

namespace AscMapKitSetup
{
    public partial class MainForm : Form
    {
        private readonly Settings _settings;

        public MainForm()
        {
            try
            {
                InitializeComponent();

                SetInitButton(false);

                _settings = Settings.Load();

                InitUE4Path();

                LoadForm();
            }
            catch (Exception e)
            {
                MessageBox.Show(e.ToString());
            }
        }

        private void LoadForm()
        {
            txtBoxUE4Path.Text = _settings.UE4Path;

            var hasGamePath = !string.IsNullOrWhiteSpace(_settings.GamePath);
            var hasCampaignFile = !string.IsNullOrWhiteSpace(_settings.CampaignFile);
            var hasCampaignName = !string.IsNullOrWhiteSpace(_settings.CampaignName);

            if (hasGamePath)
                txtBoxGamePath.Text = _settings.GamePath;

            if (hasCampaignFile)
                txtBoxCampaignProjectPath.Text = _settings.CampaignFile;

            if (hasCampaignName)
                lblCampaignNameValue.Text = _settings.CampaignName;

            if (IsAlreadyInitialized())
                SetStatus($"Campaign '{_settings.CampaignName}' is already initialized!");
            else
                SetInitButton(hasGamePath && hasCampaignFile && hasCampaignName);
        }

        private void btnGamePathBrowse_Click(object sender, EventArgs e)
        {
            var folderDialog = new FolderBrowserDialog {ShowNewFolderButton = false};
            var result = folderDialog.ShowDialog();

            if (result == DialogResult.OK)
            {
                var gamePath = folderDialog.SelectedPath;

                if (!File.Exists(Path.Combine(gamePath, "Ascentroid.exe")))
                    MessageBox.Show("Unable to find Ascentroid.exe, try a different folder!");
                else
                {
                    txtBoxGamePath.Text = gamePath;
                    _settings.GamePath = gamePath;
                }
            }
        }

        private void btnUE4Browse_Click(object sender, EventArgs e)
        {
            var folderDialog = new FolderBrowserDialog {ShowNewFolderButton = false};
            var result = folderDialog.ShowDialog();

            if (result == DialogResult.OK)
                txtBoxUE4Path.Text = folderDialog.SelectedPath;
        }

        private void btnCampaignProjectBrowse_Click(object sender, EventArgs e)
        {
            var openFileDialog = new OpenFileDialog {Multiselect = false, Filter = "UProject files (*.uproject)|*.uproject"};
            var result = openFileDialog.ShowDialog();

            if (result == DialogResult.OK)
            {
                var campaignPath = openFileDialog.FileName;
                var campaignFileInfo = new FileInfo(campaignPath);
                var campaignFileFullName = campaignFileInfo.FullName;
                var campaignFileName = campaignFileInfo.Name;
                var campaignFileNameWithoutExtension = Regex.Replace(campaignFileName, ".uproject", string.Empty, RegexOptions.IgnoreCase);

                txtBoxCampaignProjectPath.Text = campaignPath;
                lblCampaignNameValue.Text = campaignFileNameWithoutExtension;

                if (!string.IsNullOrWhiteSpace(campaignFileNameWithoutExtension))
                {
                    _settings.CampaignPath = new DirectoryInfo(campaignFileFullName).Parent?.FullName;
                    _settings.CampaignFile = campaignFileFullName;
                    _settings.CampaignName = campaignFileNameWithoutExtension;

                    if (IsAlreadyInitialized())
                    {
                        SetInitButton(false);
                        SetStatus($"Campaign '{_settings.CampaignName}' is already initialized!");
                    }
                    else
                    {
                        SetInitButton(true);
                        SetStatus("[waiting]");
                    }

                    Save();
                }
            }
        }

        private void btnInit_Click(object sender, EventArgs e)
        {
            Task.Run(() =>
                     {
                         try
                         {
                             SetInitButton(false);

                             SetStatus("Downloading Map Kit...");

                             var tempPath = Path.Combine(Utils.GetAppPath(), "Temp");
                             var unzipPath = Path.Combine(tempPath, "Unzipped");

                             if (!Directory.Exists(tempPath))
                                 Directory.CreateDirectory(tempPath);

                             if (Directory.Exists(unzipPath))
                             {
                                 Directory.Delete(unzipPath, true);
                                 Thread.Sleep(500);
                             }

                             var tempZip = Path.Combine(tempPath, "latest-stable.zip");

                             var webRequest = (HttpWebRequest) WebRequest.Create("https://github.com/Ascentroid/Ascentroid/archive/latest-stable.zip");

                             webRequest.CachePolicy = new HttpRequestCachePolicy(HttpRequestCacheLevel.NoCacheNoStore);

                             using (var response = (HttpWebResponse) webRequest.GetResponse())
                             {
                                 using (var stream = response.GetResponseStream())
                                 {
                                     if (stream != null)
                                     {
                                         using (var fs = File.Create(tempZip))
                                         {
                                             stream.CopyTo(fs);
                                         }
                                     }
                                 }
                             }

                             SetStatus("Extracting...");

                             //ZipFile.ExtractToDirectory(tempZip, unzipPath);
                             new FastZip().ExtractZip(tempZip, unzipPath, null);

                             Thread.Sleep(500);

                             File.Delete(tempZip);

                             SetStatus("Installing files...");

                             var sourceUnzipPath = Path.Combine(unzipPath, "Ascentroid-latest-stable");
                             var sourcePluginsPath = Path.Combine(sourceUnzipPath, "MapKit", "Plugins");
                             var sourceMapKitPluginPath = Path.Combine(sourcePluginsPath, "AscMapKit");
                             var sourceCampaignPluginPath = Path.Combine(sourcePluginsPath, "Campaign");
                             var sourceConfigPath = Path.Combine(sourceUnzipPath, "MapKit", "Templates", "CampaignProject", "Config");
                             var sourceSourcePath = Path.Combine(sourceUnzipPath, "MapKit", "Templates", "CampaignProject", "Source");
                             var sourceBatchScriptPath = Path.Combine(sourceUnzipPath, "MapKit", "Templates", "BatchScripts");

                             var destinationPluginsPath = Path.Combine(_settings.CampaignPath, "Plugins");
                             var destinationMapKitPluginPath = Path.Combine(destinationPluginsPath, "AscMapKit");
                             var destinationCampaignPluginPath = Path.Combine(destinationPluginsPath, "Campaign");
                             var destinationConfigPath = Path.Combine(_settings.CampaignPath, "Config");
                             var destinationSourcePath = Path.Combine(_settings.CampaignPath, "Source");
                             var destinationBatchScriptPath = Path.Combine(_settings.CampaignPath, "_BatchScripts");

                             if (Directory.Exists(destinationMapKitPluginPath))
                                 Directory.Delete(destinationMapKitPluginPath, true);

                             if (Directory.Exists(destinationCampaignPluginPath))
                                 Directory.Delete(destinationCampaignPluginPath, true);

                             Thread.Sleep(500);

                             if (Directory.Exists(destinationSourcePath))
                             {
                                 Directory.Delete(destinationSourcePath, true);
                                 Thread.Sleep(500);
                                 Directory.CreateDirectory(destinationSourcePath);
                             }

                             if (Directory.Exists(destinationBatchScriptPath))
                             {
                                 Directory.Delete(destinationBatchScriptPath, true);
                                 Thread.Sleep(500);
                                 Directory.CreateDirectory(destinationBatchScriptPath);
                             }

                             Utils.Copy(sourceMapKitPluginPath, destinationMapKitPluginPath);
                             Utils.Copy(sourceCampaignPluginPath, destinationCampaignPluginPath);
                             Utils.Copy(sourceConfigPath, destinationConfigPath);
                             Utils.Copy(sourceSourcePath, destinationSourcePath);
                             Utils.Copy(sourceBatchScriptPath, destinationBatchScriptPath);

                             SetStatus("Preparing config files...");

                             var configFile = Path.Combine(destinationConfigPath, "DefaultEngine.ini");
                             var configContents = File.ReadAllText(configFile);

                             configContents = configContents.Replace("Template", _settings.CampaignName);

                             File.WriteAllText(configFile, configContents);

                             SetStatus("Preparing source files...");

                             var destinationSourcePathDirectoryInfo = new DirectoryInfo(destinationSourcePath);

                             // Rename source path
                             foreach (var directory in destinationSourcePathDirectoryInfo.GetDirectories())
                                 Directory.Move(directory.FullName, directory.FullName.Replace("Template", _settings.CampaignName));

                             // Rename source files and replace text
                             foreach (var file in destinationSourcePathDirectoryInfo.GetFiles("*.*", SearchOption.AllDirectories))
                             {
                                 var newFileName = file.FullName.Replace("Template", _settings.CampaignName);

                                 File.Move(file.FullName, newFileName);

                                 var contents = File.ReadAllText(newFileName);

                                 contents = contents.Replace("Template", _settings.CampaignName);

                                 File.WriteAllText(newFileName, contents);
                             }

                             SetStatus("Preparing batch files...");

                             // Replace batch script variables
                             foreach (var file in new DirectoryInfo(destinationBatchScriptPath).GetFiles())
                             {
                                 var fileName = file.FullName;
                                 var contents = File.ReadAllText(fileName);

                                 contents = contents.Replace("{{UE4_PATH}}", _settings.UE4Path);
                                 contents = contents.Replace("{{PROJECT_NAME}}", _settings.CampaignName);
                                 contents = contents.Replace("{{GAME_PATH}}", _settings.GamePath);
                                 contents = contents.Replace("{{SessionId}}", Guid.NewGuid().ToString().ToUpper());
                                 contents = contents.Replace("{{SessionOwner}}", Environment.UserName);

                                 File.WriteAllText(fileName, contents);
                             }

                             SetStatus($"Done! Campaign '{_settings.CampaignName}' is ready!");

                             Save();
                         }
                         catch (Exception ex)
                         {
                             MessageBox.Show(ex.ToString());
                         }
                     });
        }

        private void Save()
        {
            _settings.UE4Path = txtBoxUE4Path.Text;
            _settings.Save();
        }

        private void InitUE4Path()
        {
            if (!string.IsNullOrWhiteSpace(_settings.UE4Path))
                return;

            using (var hklm = RegistryKey.OpenBaseKey(RegistryHive.LocalMachine, RegistryView.Registry64))
            using (var key = hklm.OpenSubKey(@"SOFTWARE\EpicGames\Unreal Engine\4.24"))
            {
                if (key == null)
                    return;

                var installedDirectoryObject = key.GetValue("InstalledDirectory");

                if (installedDirectoryObject != null)
                    _settings.UE4Path = installedDirectoryObject as string;
            }
        }

        private bool IsAlreadyInitialized()
        {
            if (string.IsNullOrWhiteSpace(_settings.CampaignPath))
                return false;

            var destinationPluginsPath = Path.Combine(_settings.CampaignPath, "Plugins");
            var destinationMapKitPluginPath = Path.Combine(destinationPluginsPath, "AscMapKit");

            return Directory.Exists(destinationMapKitPluginPath);
        }

        private void SetStatus(string status)
        {
            lblStatus.Text = status;
        }

        private void SetInitButton(bool enabled)
        {
            btnInit.Enabled = enabled;
            btnInit.ForeColor = enabled ? Color.Black : Color.Gray;
            btnInit.BackColor = enabled ? Color.LawnGreen : Color.Gray;
        }
    }
}