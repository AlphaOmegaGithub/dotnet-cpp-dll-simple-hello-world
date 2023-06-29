#include <iostream>
#include <random>
#include <thread>
#include <chrono>

extern "C"
{
    __declspec(dllexport) void FillArrayWithRandomNumbers(int* arr, size_t size)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(0, 100);  

        for (size_t i = 0; i < size; ++i)
        {
            arr[i] = distr(gen);
        }

        std::cout << "4000 numbers returned" << std::endl;
    }

    __declspec(dllexport) void CalcDelay(int* arr, size_t size)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); 
        if (size > 0)
        {
            arr[0] = 1;
        }
    }
}
