using System;
using System.Runtime.InteropServices;

class Program
{
    [DllImport("MyLibrary.dll", CallingConvention = CallingConvention.Cdecl)]
    public static extern void PrintString(string str);

    static void Main()
    {
        PrintString("Hello, World! Dolev");
    }
}
