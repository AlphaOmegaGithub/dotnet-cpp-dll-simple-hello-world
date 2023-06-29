#include <iostream>
#include <random>

extern "C"
{
    __declspec(dllexport) void FillArrayWithRandomNumbers(int* arr, size_t size)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(0, 100);  // generates random numbers between 0 and 100

        for (size_t i = 0; i < size; ++i)
        {
            arr[i] = distr(gen);
        }

        std::cout << "4000 numbers returned" << std::endl;
    }
}
