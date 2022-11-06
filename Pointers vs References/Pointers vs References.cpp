// Pointers vs References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int& x = a;

    cout << "the value of a variable is : " << a << endl ;
    cout << "the value of a Refrence x is : " << x << endl;

    cout << "the address of variable a is : " << &a << endl;
    cout << "the address of refrence x is : " << &x << endl;
    int* p = &a;

    cout << "the value of a variable is : " << a << endl;
    cout << "value of the address that  p is pointing to is : " << *p << endl;
    cout << "the address of variable a is : " << &a << endl;
    cout << "the address of pointer  p is : " << p << endl;
    int b = 20;
    *p = b;
    p = &b;
    cout << "the value of b variable is : " << b << endl;
    cout << "value of the address that  p is pointing to is : " << *p << endl;
    cout << "the address of variable b is : " << &b << endl;
    cout << "the address of pointer  p is : " << p << endl;
    
    
}


