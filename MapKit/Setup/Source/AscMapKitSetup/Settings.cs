using System;
using System.IO;
using Newtonsoft.Json;

namespace AscMapKitSetup
{
    [Serializable]
    public class Settings
    {
        public string GamePath { get; set; }
        public string UE4Path { get; set; }
        public string CampaignFile { get; set; }
        public string CampaignPath { get; set; }
        public string CampaignName { get; set; }

        public static Settings Load()
        {
            var settingsFile = GetSettingsFile();

            if (string.IsNullOrWhiteSpace(settingsFile) || !File.Exists(settingsFile))
                new Settings().Save();

            // ReSharper disable once AssignNullToNotNullAttribute
            return JsonConvert.DeserializeObject<Settings>(File.ReadAllText(settingsFile));
        }

        public void Save()
        {
            File.WriteAllText(GetSettingsFile(), JsonConvert.SerializeObject(this, Formatting.Indented));
        }

        private static string GetSettingsFile()
        {
            var appPath = Utils.GetAppPath();
            return appPath == null ? null : Path.Combine(appPath, "Settings.json");
        }
    }
}