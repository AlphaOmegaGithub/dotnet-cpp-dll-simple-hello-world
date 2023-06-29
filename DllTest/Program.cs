using System;
using System.Runtime.InteropServices;

class Program
{
    [DllImport("MYLibrary.dll", CallingConvention = CallingConvention.Cdecl)]
    public static extern void FillArrayWithRandomNumbers(int[] arr, UIntPtr size);

    
    [DllImport("MYLibrary.dll", CallingConvention = CallingConvention.Cdecl)]
    public static extern void CalcDelay(int[] arr, UIntPtr size);


    static void Main()
    {
        int[] arr = new int[4000];
        FillArrayWithRandomNumbers(arr, (UIntPtr)arr.Length);
       Console.WriteLine("arr output is :");
        for(int i = 0; i < arr.Length; i++)
        {
            Console.Write(arr[i] + " ");
        }
        Console.WriteLine();

        CalcDelay(arr, (UIntPtr)arr.Length);
        Console.Write("First modified to: " , arr[0]);
        Console.WriteLine();
    }
}
