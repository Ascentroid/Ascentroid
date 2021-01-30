@echo off

call %~dp0\Settings.bat

"%UE4_PATH%\Engine\Build\BatchFiles\RunUAT.bat" BuildCookRun -project="%UPROJECT_FILE%" -noP4 -platform=Win64 -clientconfig=Development -serverconfig=Development -cook -allmaps -build -pak -stage -stagingdirectory="%PROJECT_PATH%\Saved\StagedBuilds"

pause