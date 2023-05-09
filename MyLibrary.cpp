#include <iostream>
#include <string>
 
extern "C"
{
    __declspec(dllexport) void PrintString(const char* str)
    {
        std::string input(str);
        std::cout << input << std::endl;
    }
}
