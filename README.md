# How to run

pre-requisites: c++ compiler for windows 64 bit

1. install MinGW-x64

copy and past this url in the browser and download the installer

https://github.com/msys2/msys2-installer/releases/download/2022-06-03/msys2-x86_64-20220603.exe 

2. install MinGW-x64

3. after the instalation finished, open the MinGW-x64 terminal and run the following commands

```
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
```

4. add to path 

open windows search bar and search for Edit environment variables for your account

and add to path the bin folder of the mysys64 instalation

for me it was

C:\msys64\mingw64\bin

then click ok and save

5. open the terminal and check for the g++ version

```
g++ --version
```

6. clone the repository

```
git clone https://github.com/AlphaOmegaGithub/dotnet-cpp-dll-simple-hello-world.git
```

7. go to the repository folder

```
cd dotnet-cpp-dll-simple-hello-world
```

8. compile the code

```
./build.bat
```
or maybe this 

```
 build.bat
```

the build.bat just run the following command known from linux
```
 g++ -shared -o MyLibrary.dll MyLibrary.cpp
```

10. move the dll to the C# project folder

```
move MyLibrary.dll ./DllTest
```
11. cd to the C# project folder

```
cd ./DllTest
```

12. install dotnet NuGet packages

```
dotnet restore
```

13. build

```
dotnet build
```

14. run
```
dotnet run
```

and Vuala!, the C# project is running with the c++ dll! 


my system info:
windows 10 64 bit
32gb ram






