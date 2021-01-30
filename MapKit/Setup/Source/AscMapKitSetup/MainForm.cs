using System;
using System.Drawing;
using System.IO;
using System.IO.Compression;
using System.Net;
using System.Net.Cache;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
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

                _settings = Settings.Load();

                InitUE4Path();
            }
            catch (Exception e)
            {
                MessageBox.Show(e.ToString());
            }
        }
        
        private void MainForm_Load(object sender, EventArgs e)
        {
            LoadForm();
        }

        private void LoadForm()
        { 
            SetInitButton(false);
            
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

        private void txtBoxGamePath_Leave(object sender, EventArgs e)
        {
            if (!string.IsNullOrWhiteSpace(txtBoxGamePath.Text))
                _settings.GamePath = txtBoxGamePath.Text.Trim();
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

        private void txtBoxUE4Path_Leave(object sender, EventArgs e)
        {
            if (!string.IsNullOrWhiteSpace(txtBoxUE4Path.Text))
                _settings.UE4Path = txtBoxUE4Path.Text.Trim();
        }

        private void btnUE4Browse_Click(object sender, EventArgs e)
        {
            var folderDialog = new FolderBrowserDialog {ShowNewFolderButton = false};
            var result = folderDialog.ShowDialog();

            if (result == DialogResult.OK)
                txtBoxUE4Path.Text = folderDialog.SelectedPath;
        }

        private void txtBoxCampaignProjectPath_Leave(object sender, EventArgs e)
        {
            if (!string.IsNullOrWhiteSpace(txtBoxCampaignProjectPath.Text))
                HandleCampaignPath(txtBoxCampaignProjectPath.Text.Trim());
        }

        private void btnCampaignProjectBrowse_Click(object sender, EventArgs e)
        {
            var openFileDialog = new OpenFileDialog {Multiselect = false, Filter = "UProject files (*.uproject)|*.uproject"};
            var result = openFileDialog.ShowDialog();

            if (result == DialogResult.OK)
                HandleCampaignPath(openFileDialog.FileName);
        }

        private void HandleCampaignPath(string campaignPath)
        {
            var campaignFileInfo = new FileInfo(campaignPath);
            var campaignFileFullName = campaignFileInfo.FullName;
            var campaignFileName = campaignFileInfo.Name;
            var campaignFileNameWithoutExtension = Regex.Replace(campaignFileName, ".uproject", string.Empty, RegexOptions.IgnoreCase);

            txtBoxCampaignProjectPath.Text = campaignPath;
            lblCampaignNameValue.Text = campaignFileNameWithoutExtension;

            if (string.IsNullOrWhiteSpace(campaignFileNameWithoutExtension))
                return;

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

        private void btnInit_Click(object sender, EventArgs e)
        {
            Invoke(new MethodInvoker(ExecuteInit));
        }

        private void ExecuteInit()
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

                ServicePointManager.Expect100Continue = true;
                ServicePointManager.SecurityProtocol = SecurityProtocolType.Tls | SecurityProtocolType.Tls11 | SecurityProtocolType.Tls12 | SecurityProtocolType.Ssl3;

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

                ZipFile.ExtractToDirectory(tempZip, unzipPath);

                Thread.Sleep(500);

                File.Delete(tempZip);

                SetStatus("Installing files...");

                var sourceUnzipPath = Path.Combine(unzipPath, "Ascentroid-latest-stable");
                var sourcePluginsPath = Path.Combine(sourceUnzipPath, "MapKit", "Plugins");
                var sourceMapKitPluginPath = Path.Combine(sourcePluginsPath, "AscMapKit");
                var sourceCampaignPluginPath = Path.Combine(sourcePluginsPath, "Campaign");
                var sourceConfigPath = Path.Combine(sourceUnzipPath, "MapKit", "Templates", "CampaignProject", "Config");
                var sourceContentPath = Path.Combine(sourceUnzipPath, "MapKit", "Templates", "CampaignProject", "Content");
                var sourceSourcePath = Path.Combine(sourceUnzipPath, "MapKit", "Templates", "CampaignProject", "Source");
                var sourceBatchScriptPath = Path.Combine(sourceUnzipPath, "MapKit", "Templates", "BatchScripts");
                var sourceCampaignJsonFile = Path.Combine(sourceUnzipPath, "MapKit", "Templates", "CampaignProject", "Template.json");

                var destinationPluginsPath = Path.Combine(_settings.CampaignPath, "Plugins");
                var destinationMapKitPluginPath = Path.Combine(destinationPluginsPath, "AscMapKit");
                var destinationCampaignPluginPath = Path.Combine(destinationPluginsPath, "Campaign");
                var destinationConfigPath = Path.Combine(_settings.CampaignPath, "Config");
                var destinationContentPath = Path.Combine(_settings.CampaignPath, "Content");
                var destinationSourcePath = Path.Combine(_settings.CampaignPath, "Source");
                var destinationBatchScriptPath = Path.Combine(_settings.CampaignPath, "_BatchScripts");
                var destinationCampaignJsonFile = Path.Combine(_settings.CampaignPath, $"{_settings.CampaignName}.json");

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
                Utils.Copy(sourceContentPath, destinationContentPath);
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
                    contents = contents.Replace("{{PROJECT_PATH}}", _settings.CampaignPath);
                    contents = contents.Replace("{{PROJECT_NAME}}", _settings.CampaignName);
                    contents = contents.Replace("{{GAME_PATH}}", _settings.GamePath);
                    contents = contents.Replace("{{SessionId}}", Guid.NewGuid().ToString().ToUpper());
                    contents = contents.Replace("{{SessionOwner}}", Environment.UserName);

                    File.WriteAllText(fileName, contents);
                }

                File.Copy(sourceCampaignJsonFile, destinationCampaignJsonFile, true);

                // Replace campaign JSON text
                var jsonFileInfo = new FileInfo(destinationCampaignJsonFile);
                var jsonFileName = jsonFileInfo.FullName;
                var jsonContents = File.ReadAllText(jsonFileName);

                jsonContents = jsonContents.Replace("Template", _settings.CampaignName);

                File.WriteAllText(jsonFileName, jsonContents);

                SetStatus($"Done! Campaign '{_settings.CampaignName}' is ready!");

                var sb = new StringBuilder().Append(Environment.NewLine);

                sb.Append("Done! Next:").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append($"1) Execute (as a Windows Administrator user): {Path.Combine(destinationBatchScriptPath, "GenerateProject.bat")}").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append($"2) Execute (as a Windows Administrator user): {Path.Combine(destinationBatchScriptPath, "Compile.bat")}").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append("3) Open your UE4 project").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append("4) If UE4 prompts to \"update project file(s)\", click \"Update\".").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append("5) If UE4 says there are \"new plugins installed\", click \"Dismiss\".").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append("6) If not already done: in the UE4 editor \"Content Browser\", click \"View Options\" and turn on \"Show Plugin Content\".").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append("7) Create at least one level in your UE4 project and save it to the 'Campaign Content' folder").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append($"8) Edit campaign JSON (make sure your campaign and level name(s) match): {destinationCampaignJsonFile}").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append("9) All assets used in your campaign *must* be saved in the 'Campaign Content' folder (or they *won't* cook!)").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append($"10) To cook your campaign, execute (as a Windows Administrator user): {Path.Combine(destinationBatchScriptPath, "Cook.bat")}").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append($"11) The JSON and PAK files for your campaign will be copied to the Ascentroid game folder: {Path.Combine(_settings.GamePath, "Ascentroid", "Content", "Ascentroid", "Paks")}").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append("12) If everything worked, you can now test your campaign in the game, Ascentroid!").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append("13) Visit Github for more documentation: https://github.com/Ascentroid/Ascentroid").Append(Environment.NewLine).Append(Environment.NewLine);
                sb.Append("14) Visit YouTube for tutorials: http://youtube.ascentroid.com").Append(Environment.NewLine);

                MessageBox.Show(sb.ToString());

                Save();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
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
            void Action()
            {
                lblStatus.Text = status;
                lblStatus.Refresh();
            }

            lblStatus.Invoke((Action) Action);
        }

        private void SetInitButton(bool enabled)
        {
            void Action()
            {
                btnInit.Enabled = enabled;
                btnInit.ForeColor = enabled ? Color.Black : Color.Gray;
                btnInit.BackColor = enabled ? Color.LawnGreen : Color.Gray;
                btnInit.Refresh();
            }

            btnInit.Invoke((Action) Action);
        }
    }
}