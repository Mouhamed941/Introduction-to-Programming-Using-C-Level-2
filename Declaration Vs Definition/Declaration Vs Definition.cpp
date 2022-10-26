// Declaration Vs Definition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//function declaration
void Add(int, int);
void PrintHello();
int main()
{
    Add(10, 20);
}

//function definition
void Add(int a, int b)
{
    cout << a + b << endl;
    PrintHello();
}

void PrintHello()
{
    cout << "Hello" << endl;
}