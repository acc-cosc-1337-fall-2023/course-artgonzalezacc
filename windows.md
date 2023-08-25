Windows-Development Environment Setup
1. Download C++ Compiler
   - Mingw-64 https://github.com/jmeubank/tdm-gcc/releases/download/v10.3.0-tdm64-2/tdm64-gcc-10.3.0-2.exe
   - Mingw    https://github.com/jmeubank/tdm-gcc/releases/download/v10.3.0-tdm-1/tdm-gcc-10.3.0.exe
   - Click on the exe file for installation (remember the install location for later).
   
2. Setup the C++ Environment Variable
   - Click on the Windows task bar icon.
   - Start typing Environment.
   - Select/click on the Edit the System Environment Variables option.
   - On the System Properties dialog select the Environment Variables... button on lower left of the window.
   - Under User variables click on the Edit... button (the Edit variable dialog pops up).
   - Click New, in the edit box type the path to C++ compiler (C:\INSTALL_path_to_tdm\TDM-GCC-64\bin).
   - Click New, in the edit box type the path to C++ compiler library (C:\Install_path_to_tdm\TDM-GCC-64\lib\gcc1030TDM_x64_dll).
   - Click the OK button
   - Click the Apply button

3. Install CMake
   - Download the Windows Installer Option.
   - https://cmake.org/download/
   - Click the file to install (remember the install location for later).

4. Install Git
   - Download the Windows option from https://git-scm.com/downloads
   - Start the Installer
   - Accept all the defaults 
   - Click on the Windows icon or use the Windows key on keyboard
   - Type Bash
   - Enter Git Bash
   - type git config --global user.name "Enter your GitHub username", press the ENTER key
   - type git config --global user.email your email@example.com, press the ENTER key           

4. Install Visual Studio Code
   - Download Visual Studio Code for Windows
   - https://code.visualstudio.com/
   - Click on the downloaded file for installation
   - Open Visual Studio Code
   
   
