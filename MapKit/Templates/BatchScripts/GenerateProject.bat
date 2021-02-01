@echo off

call "%~dp0\Settings.bat"

"%UE4_PATH%\Engine\Binaries\DotNET\UnrealBuildTool.exe" -projectfiles -project="%UPROJECT_FILE%" -game -rocket -progress -log="%PROJECT_PATH%\Saved\Logs\UnrealVersionSelector-Run-Manually.log"

pause