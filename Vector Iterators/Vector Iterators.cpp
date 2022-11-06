// Vector Iterators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector <int> Numbers = { 1,2,3,4,5 };
    // declare iterator
    vector <int> ::iterator iter;

    // use iteraretors with for loop
    for (iter = Numbers.begin(); iter != Numbers.end(); iter++)
    {
        cout << *iter << " ";
    }
}


