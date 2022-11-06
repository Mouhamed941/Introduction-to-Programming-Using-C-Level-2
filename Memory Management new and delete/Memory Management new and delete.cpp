// Memory Management new and delete.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    // declar a int pointer
    int* ptrX;

    // declar a float pointer
    float* ptrY;

    //dynamicly allocate memory
    ptrX = new int;
    ptrY = new float;

    // Assiging value to the memory
    *ptrX = 45;
    *ptrY = 33.50f;

    cout << *ptrX << endl;
    cout << *ptrY << endl;

    // deallocate the memory
    delete ptrX;
    delete ptrY;
}

