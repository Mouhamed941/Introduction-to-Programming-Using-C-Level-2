// Pointer to Void.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    void* ptr;
    float f1 = 10.5;
    ptr = &f1;
    cout << ptr << endl;
    cout << *(static_cast<float*>(ptr)) << endl;

    int i = 5;
    ptr = &i;
    cout << ptr << endl;
    cout << *(static_cast<int*>(ptr)) << endl;

    string str = "ahmed";
    ptr = &str;
    cout << ptr << endl;
    cout << *(static_cast<string*>(ptr)) << endl;

    char C = 'A';
    ptr = &C;
    cout << ptr << endl;
    cout << *(static_cast<char*>(ptr)) << endl;

}

