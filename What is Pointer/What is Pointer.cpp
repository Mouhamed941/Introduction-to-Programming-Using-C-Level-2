// What is Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    
    cout <<"a Value       = " << a << endl;
    cout << "a Address     = " << &a << endl;

    
    int* p = &a;

    p = &a;

    cout << "Pointer Value = " << *p << endl;

    *p = 20;
    cout << a << endl;
    cout << *p << endl;
}

