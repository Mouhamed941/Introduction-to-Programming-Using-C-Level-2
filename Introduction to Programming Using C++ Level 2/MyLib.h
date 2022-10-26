#pragma once
#include <iostream>
using namespace std;

namespace ReadInputs
{
	
    float ReadPositiveNumber(string Message)
    {
        int Num;
        do
        {
            cout << Message << endl;
            cin >> Num;

        } while (Num <= 0);

        return Num;
    }

}
namespace MyMathLib
{
    bool CheckIfPerfectNumber(int Number)
    {
        int Counter = 0;
        int M = floor(Number / 2);
        for (size_t i = 1; i <= M; i++)
        {
            if (Number % i == 0)
            {
                Counter += i;
            }
        }
        return Number == Counter;
    }
}