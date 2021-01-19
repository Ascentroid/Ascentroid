using System.IO;
using System.Windows.Forms;

namespace AscMapKitSetup
{
    public static class Utils
    {
        public static string GetAppPath()
        {
            return Path.GetDirectoryName(Application.ExecutablePath);
        }

        public static void Copy(string sourceDirectory, string targetDirectory)
        {
            CopyRecursive(new DirectoryInfo(sourceDirectory), new DirectoryInfo(targetDirectory));
        }

        private static void CopyRecursive(DirectoryInfo source, DirectoryInfo target)
        {
            if (!Directory.Exists(target.FullName))
                Directory.CreateDirectory(target.FullName);

            foreach (var fileInfo in source.GetFiles())
                fileInfo.CopyTo(Path.Combine(target.FullName, fileInfo.Name), true);

            foreach (var sourceDirectoryInfo in source.GetDirectories())
                CopyRecursive(sourceDirectoryInfo, target.CreateSubdirectory(sourceDirectoryInfo.Name));
        }
    }
}