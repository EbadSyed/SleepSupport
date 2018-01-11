@echo off
setlocal enableextensions enabledelayedexpansion
SET allParams=%*
SET params=%allParams:' '=","%
SET params=%params:'="%
set /a count=0
for %%i in (%params%) do (
  set /a count+=1
  set param[!count!]=%%i
)

set "studioInstallationDir=C:\SiliconLabs\SimplicityStudio\v4"
set "projDir=%~dp0"
set "projDir=%projDir:"=%"

"%studioInstallationDir%/features\com.silabs.external.java.windows.x86_64.feature_1.8.0.92\jre\bin\java.exe" -jar "C:\SiliconLabs\SimplicityStudio\v4\plugins\com.silabs.external.jython_2.7.0.201705012047-102\external_jython\2.7.0\jython-2.7.0.jar"  "%projDir%/Z3ColorTempLightSoc_6-postbuild.py" %param[1]%  %param[2]%  "" "" %param[3]% 