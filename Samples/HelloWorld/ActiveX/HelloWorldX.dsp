# Microsoft Developer Studio Project File - Name="HelloWorld ActiveX" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) External Target" 0x0106

CFG=HelloWorld ActiveX - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE
!MESSAGE NMAKE /f "HelloWorldX.mak".
!MESSAGE
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE
!MESSAGE NMAKE /f "HelloWorldX.mak" CFG="HelloWorld ActiveX - Win32 Debug"
!MESSAGE
!MESSAGE Possible choices for configuration are:
!MESSAGE
!MESSAGE "HelloWorld ActiveX - Win32 Release" (based on "Win32 (x86) External Target")
!MESSAGE "HelloWorld ActiveX - Win32 Debug" (based on "Win32 (x86) External Target")
!MESSAGE

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""$/Samples/HelloWorld/ActiveX", XWFAAAAA"
# PROP Scc_LocalPath "."

!IF  "$(CFG)" == "HelloWorld ActiveX - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Cmd_Line "NMAKE /f HelloWorld.mak"
# PROP BASE Rebuild_Opt "/a"
# PROP BASE Target_File "HelloWorld.exe"
# PROP BASE Bsc_Name "HelloWorld.bsc"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Cmd_Line "..\..\..\bin\mkhwt.bat r"
# PROP Rebuild_Opt "cc"
# PROP Target_File "..\..\..\output\release\HelloWorldX.exe"
# PROP Bsc_Name ""
# PROP Target_Dir ""

!ELSEIF  "$(CFG)" == "HelloWorld ActiveX - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "HelloWorld___Win32_Debug"
# PROP BASE Intermediate_Dir "HelloWorld___Win32_Debug"
# PROP BASE Cmd_Line "NMAKE /f HelloWorld.mak"
# PROP BASE Rebuild_Opt "/a"
# PROP BASE Target_File "HelloWorld.exe"
# PROP BASE Bsc_Name "HelloWorld.bsc"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "HelloWorld___Win32_Debug"
# PROP Intermediate_Dir "HelloWorld___Win32_Debug"
# PROP Cmd_Line "..\..\..\bin\mkhwx.bat"
# PROP Rebuild_Opt "cc"
# PROP Target_File "..\..\..\output\debug\HelloWorldX.exe"
# PROP Bsc_Name ""
# PROP Target_Dir ""

!ENDIF

# Begin Target

# Name "HelloWorld ActiveX - Win32 Release"
# Name "HelloWorld ActiveX - Win32 Debug"

!IF  "$(CFG)" == "HelloWorld ActiveX - Win32 Release"

!ELSEIF  "$(CFG)" == "HelloWorld ActiveX - Win32 Debug"

!ENDIF

# Begin Group "Res"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\Res\HelloWorld.ico
# End Source File
# Begin Source File

SOURCE=.\Res\HelloWorld.rc
# End Source File
# Begin Source File

SOURCE=.\Res\Resource.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\HelloWorld.cpp
# End Source File
# Begin Source File

SOURCE=.\HelloWorld.h
# End Source File
# Begin Source File

SOURCE=.\Main.h
# End Source File
# End Target
# End Project
