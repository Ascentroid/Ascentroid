$TemplateMatch = 'Template';

$ProjectSetupConfirmed = Read-Host -Prompt 'Have you created your Ascentroid UE4 campaign project already? (Y/n)';

If ($ProjectSetupConfirmed.Trim().ToLower() -eq 'n') {
  $Error = "[ERROR] You must setup your Ascentroid UE4 campaign project before using this script! Do that first, then come back to this.";
  Write-Host "$Error" -ForegroundColor Red;
  Pause;
  Throw $Error;
}

$UE4InstallReg = Get-ItemProperty -Path 'Registry::HKEY_LOCAL_MACHINE\SOFTWARE\EpicGames\Unreal Engine\4.24' -Name 'InstalledDirectory';
$UE4InstallDir = $UE4InstallReg.InstalledDirectory;

Write-Host "Found UE4 install directory: " -NoNewline; Write-Host "${UE4InstallDir}" -ForegroundColor Green;
$UE4InstallConfirmed = Read-Host -Prompt "Is this the correct directory where UE4 is installed? (Y/n)";

If ($UE4InstallConfirmed.Trim().ToLower() -eq 'n') {
  $UE4InstallDir = Read-Host -Prompt 'Please provide the directory where UE4 is installed';
}

If (!(Test-Path $UE4InstallDir)) {
  $Error = "[ERROR] Directory does not exist: ${UE4InstallDir}";
  Write-Host "$Error" -ForegroundColor Red;
  Pause;
  Throw $Error;
}

$UE4EditorExe = "${UE4InstallDir}\Engine\Binaries\Win64\UE4Editor.exe"

If (!(Test-Path $UE4EditorExe)) {
  $Error = "[ERROR] Check for UE4Editor.exe...file does not exist: ${UE4EditorExe}";
  Write-Host "$Error" -ForegroundColor Red;
  Pause;
  Throw $Error;
}

# C:\Dev\Ascentroid\Campaigns\Test
$CampaignDir = Read-Host -Prompt 'Please enter the directory to your Ascentroid UE4 campaign project (where your *.uproject file is located)';

If (!(Test-Path $CampaignDir)) {
  $Error = "[ERROR] Directory does not exist: ${CampaignDir}";
  Write-Host "$Error" -ForegroundColor Red;
  Pause;
  Throw $Error;
}

$CampaignSourceDir = $CampaignDir + "\Source\";

If (!(Test-Path $CampaignSourceDir)) {
  $Error = "[ERROR] Directory does not exist: ${CampaignSourceDir}";
  Write-Host "$Error" -ForegroundColor Red;
  Pause;
  Throw $Error;
}

$CampaignUProjectName = '';

Get-ChildItem -Path $CampaignDir -Filter *.uproject -Recurse -File | Sort-Object Length -Descending | ForEach-Object {
  $CampaignUProjectName = $_.BaseName;
}

$CampaignUProjectNameConfirmed = Read-Host -Prompt "Is your Ascentroid UE4 campaign project name '${CampaignUProjectName}'? (Y/n)";

If ($CampaignUProjectName -eq '' -or $CampaignUProjectNameConfirmed.Trim().ToLower() -eq 'n') {
  $Error = "[ERROR] Well, shoot, sorry! The script was unable to parse your Ascentroid UE4 campaign project name. Not sure why. This could be a script bug, or, check your file(s) and name(s) and try again.";
  Write-Host "$Error" -ForegroundColor Red;
  Pause;
  Throw $Error;
}

$CampaignFileName = $CampaignUProjectName.Trim();

Get-ChildItem -Recurse $CampaignSourceDir |
Where-Object {$_.Name -Match $TemplateMatch} |
Rename-Item -NewName { $_.Name -Replace $TemplateMatch, $CampaignFileName }

GCI -Recurse $CampaignSourceDir -Include "*.h", "*.cpp", "*.cs" |
ForEach-Object {
  $x = $_.FullName; (Get-Content $x) |
  ForEach-Object {
    $_ -Replace $TemplateMatch, $CampaignFileName
  } |
  Set-Content $x;
}

$CampaignDisplayName = Read-Host -Prompt 'What is your campaign name for display purposes? (okay to use spaces and *some* special characters)';
$CampaignDisplayName = $CampaignDisplayName.Trim();

# todo: setup the json file next

# todo: remove this
Write-Host "${UE4InstallDir}";
Write-Host "${CampaignDisplayName}";
Write-Host "${CampaignFileName}";

# todo: let the user know everything is ready

Pause;