# C++ by freecodechamp

## Development tools 
### For windows
IDEs
- Visual Studio Code
- Microsoft Visual Studio
- CodeLite

Compilers
- Mingw
- MSVC
- Clang llvm

#### Installing Compiler
1. **Visual Studio Code** & **Clang llvm**
- Go to the browser and search for **C++ Compiler Support**
Choose the compiler as per features supported by them
                            OR 
For more reference go to: https://en.cppreference.com/w/cpp/compiler_support

- Search winlibs 
                            OR
For more  refernece go to: https://winlibs.com/

- Download the GCC as per system/choice
This will give **Gcc Compiler** and **Clang compiler**
Extract the zip as per your desired location
Open the extracted file go to (mingw64 then) **bin** and **copy the path**

Search the **Edit the sysytem environment variables** in search bar
                            OR
Right click on This PC on Desktop
Click on **Properties** (which open setting)
on setting on right hand side Under **Related Setting** **Advance system settings** is avaliable, click on Advance system settings

Both these pop up **System Properties**
Under **Advanced** tab **Environment Variable...** click on it 
![alt text](image.png)
choose **system varibles** for single user in system and for multiple user in system choose **user variables**
Click on **path** -> **edit** -> **new** paste the copy path of bin -> **OK**

- check compiler is working
open cmd 
```
g++ --version
clang++ --version
```

2. **MSVC**
Compiler:
- Download *Community version* of **Microsoft Visual Studio** 
- Download and Install **Desktop Development using C++** workload in Microsoft Visual Studio
![alt text](image-1.png)
- Developer **Developer Command Prompt For VS 2022** app

#### Installing IDE
1 **Visual Studio Code**
- Search on browser **Visual Studio Code**
                        OR
  Directly open the website: https://code.visualstudio.com/
- Download as per your sysytem requirement
- Click on the extension (click on the highleted )
- Search C++ and download the given extension
![alt text](image-2.png)

- Create a new folder and create a new file with name **main.cpp**
- In **main.cpp** add the following code
```
#include <iostream>

int main ()
{
    // test compiler support 
    auto result = (10 <=> 20) > 0;    // <=> spaceshift operator
    std::cout << result << std::endl;
}
```


- Click on the **terminal** tab 
- Then click on **Configure tasks..**
- Then click on **C/C++:g++.exe build active file** this create a tasks.json
- we can change the lebel to change the compiler like **"Build with GCC 11.2.0"
- Pass a flag in args and add **-std=c++20**
                            OR
- To enable C++20 support, add the command-line parameter in args
```
-std=c++20
```
- Click on **Terminal** tab and then **New Terminal**
- Then select/open **main.cpp** 
- Then click on **Terminal** tab & then click on **Run Task..** & then **Build with GCC 11.2.0**
- Press any key in terminal
- Run these Commands
```
./main.exe
```

For futher **Config details** refer to:
for Windows: https://code.visualstudio.com/docs/cpp/config-mingw
for WSL: https://code.visualstudio.com/docs/cpp/config-wsl
for Linux: https://code.visualstudio.com/docs/cpp/config-wsl
for MacOs: https://code.visualstudio.com/docs/cpp/config-clang-mac


to be continue from 43:49N

### For linux
IDEs
- Visual Code Studio
- Qt Creator
- CodeLite

ompilers
- Gcc
- Clang llvm

### For Mac
IDEs
- Visual Code Studio
- XCode
- CodeLIte

Compilers
- Gcc
- Clang Apple
- Clang llvm