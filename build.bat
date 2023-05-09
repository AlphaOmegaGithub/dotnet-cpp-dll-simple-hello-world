@REM clean the file MyLibrary.dll only if it exists
if exist MyLibrary.dll del MyLibrary.dll



@REM recompile the file MyLibrary.dll
g++ -shared -o MyLibrary.dll MyLibrary.cpp