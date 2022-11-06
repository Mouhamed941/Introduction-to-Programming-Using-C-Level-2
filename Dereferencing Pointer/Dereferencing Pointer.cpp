// Dereferencing Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a = 10;

    cout << "a Value       = " << a << endl;
    cout << "a Address     = " << &a << endl;


    int* p = &a;
    cout << "Pointer Value = " << p << endl;
    cout << "value of the address that  p is pointing to is " << *p << endl;

    *p = 15;
    cout << a << endl;
    cout << *p << endl;
    cout << endl;
    *p = 30;
    cout << a << endl;
    cout << *p << endl;
}

