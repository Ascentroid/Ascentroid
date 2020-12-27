@echo off

call Settings.bat

rem Create the release
start "1 Primary Cook" /wait /max %UE4_PATH%\Engine\Build\BatchFiles\RunUAT.bat -ScriptsForProject="%UPROJECT_FILE%" BuildCookRun -project="%UPROJECT_FILE%" -noP4 -clientconfig=Shipping -serverconfig=Shipping -nocompileeditor -ue4exe=UE4Editor-Cmd.exe -utf8output -platform=Win64 -targetplatform=Win64 -build -cook -map=Empty -unversionedcookedcontent -pak -createreleaseversion=1.0 -compressed -stage -package -cmdline="Empty -Messaging" -addcmdline="-SessionId=0D0A64B94E0441EA86FFE9ADA0DD82DA -SessionOwner='jvukovich' -SessionName='Primary Cook' " -compile

rem Cook the campaign for the release
start "2 Campaign Cook" /wait /max %UE4_PATH%\Engine\Build\BatchFiles\RunUAT.bat -ScriptsForProject="%UPROJECT_FILE%" BuildCookRun -project="%UPROJECT_FILE%" -noP4 -clientconfig=Shipping -serverconfig=Shipping -nocompileeditor -ue4exe=UE4Editor-Cmd.exe -utf8output -platform=Win64 -targetplatform=Win64 -build -cook -map= -unversionedcookedcontent -pak -dlcname=Campaign -DLCIncludeEngineContent -basedonreleaseversion=1.0 -stagebasereleasepaks -stage -compressed -compile

rem This is where the pak file gets cooked / built
set PakBuildOutputDir="%PROJECT_PATH%\Plugins\Campaign\Saved\StagedBuilds\WindowsNoEditor\%PROJECT_NAME%\Plugins\Campaign\Content\Paks\WindowsNoEditor"

rem Get rid of "Campaign" prefix on our file name, and rename "WindowsNoEditor" to "Windows"
ren "%PakBuildOutputDir%\Campaign%PROJECT_NAME%-WindowsNoEditor.pak" "%PROJECT_NAME%-Windows.pak"

rem Copy the pak file to our game content
xcopy "%PakBuildOutputDir%\*.*" "%GAME_PATH%\" /i /e /y /z

rem Copy the json file to our game content
copy /y "%PROJECT_PATH%\%PROJECT_NAME%.json" "%GAME_PATH%\%PROJECT_NAME%.json"

pause