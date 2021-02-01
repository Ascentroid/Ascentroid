@echo off

call "%~dp0\Settings.bat"

if exist "%PROJECT_PATH%\Content\Empty.umap" (
  goto :ok
) else goto :emptylevelfilemissing

:emptylevelfilemissing
ECHO ERROR! ERROR! ERROR!
echo "%PROJECT_PATH%\Content\Empty.umap" is missing!
echo Re-download it from Github at: https://github.com/Ascentroid/Ascentroid/raw/latest-stable/MapKit/Templates/CampaignProject/Content/Empty.umap
echo Save it here: "%PROJECT_PATH%\Content\Empty.umap"
echo Re-run Cook.bat after you have the file put in the right place.
echo IMPORTANT: Do not ever delete Empty.umap from the Content folder, or cook will not work!
pause
goto :end
exit

:ok
rem Create the release
start "1 Primary Cook" /wait /max /d "%UE4_PATH%\Engine\Build\BatchFiles\" RunUAT.bat -ScriptsForProject="%UPROJECT_FILE%" BuildCookRun -project="%UPROJECT_FILE%" -noP4 -clientconfig=Shipping -serverconfig=Shipping -nocompileeditor -ue4exe=UE4Editor-Cmd.exe -utf8output -platform=Win64 -targetplatform=Win64 -build -cook -map=Empty -unversionedcookedcontent -pak -createreleaseversion=1.0 -compressed -stage -package -cmdline="Empty -Messaging" -addcmdline="-SessionId=0D0A64B94E0441EA86FFE9ADA0DD82DA -SessionOwner='jvukovich' -SessionName='Primary Cook' " -compile

rem Cook the campaign for the release
start "2 Campaign Cook" /wait /max /d "%UE4_PATH%\Engine\Build\BatchFiles\" RunUAT.bat -ScriptsForProject="%UPROJECT_FILE%" BuildCookRun -project="%UPROJECT_FILE%" -noP4 -clientconfig=Shipping -serverconfig=Shipping -nocompileeditor -ue4exe=UE4Editor-Cmd.exe -utf8output -platform=Win64 -targetplatform=Win64 -build -cook -map= -unversionedcookedcontent -pak -dlcname=Campaign -DLCIncludeEngineContent -basedonreleaseversion=1.0 -stagebasereleasepaks -stage -compressed -compile

rem This is where the pak file gets cooked / built

rem Get rid of "Campaign" prefix on our file name, and rename "WindowsNoEditor" to "Windows"
set PakBuildOutputDir=%PROJECT_PATH%\Plugins\Campaign\Saved\StagedBuilds\WindowsNoEditor\%PROJECT_NAME%\Plugins\Campaign\Content\Paks\WindowsNoEditor
echo PakBuildOutputDir=%PakBuildOutputDir%

echo Deleting "%PakBuildOutputDir%\%PROJECT_NAME%-Windows.pak"
del "%PakBuildOutputDir%\%PROJECT_NAME%-Windows.pak"

echo Renaming "%PakBuildOutputDir%\Campaign%PROJECT_NAME%-WindowsNoEditor.pak" to "%PROJECT_NAME%-Windows.pak"
ren "%PakBuildOutputDir%\Campaign%PROJECT_NAME%-WindowsNoEditor.pak" "%PROJECT_NAME%-Windows.pak"

rem Sleep one second
ping 127.0.0.1 -n 1 > nul

rem Copy the pak file to our game content
echo Copying "%PakBuildOutputDir%\%PROJECT_NAME%-Windows.pak" to "%GAME_PATH%\"
copy /y "%PakBuildOutputDir%\%PROJECT_NAME%-Windows.pak" "%GAME_PATH%\"

rem Copy the json file to our game content
echo Copying JSON from "%PROJECT_PATH%\%PROJECT_NAME%.json" to "%GAME_PATH%\%PROJECT_NAME%.json"
copy /y "%PROJECT_PATH%\%PROJECT_NAME%.json" "%GAME_PATH%\%PROJECT_NAME%.json"

pause

:end
exit