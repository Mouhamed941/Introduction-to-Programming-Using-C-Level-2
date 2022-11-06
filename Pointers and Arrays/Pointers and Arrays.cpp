// Pointers and Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int arr[4] = { 10,20,30,40 };
    int* ptr;
    ptr = arr;

    /*
    ptr is equivlent  to &arr[0]
    ptr+1 is equivlent  to &arr[1]
    ptr+2 is equivlent  to &arr[2]
    ptr+3 is equivlent  to &arr[3]
    */
    cout << "Addresses are : \n";
    cout << arr << endl;
    cout << arr + 1 << endl;
    cout << arr + 2 << endl;
    cout << arr + 3 << endl;
    /*
    *ptr is equivlent  to arr[0]
    *(ptr+1) is equivlent  to arr[1]
    *(ptr+2) is equivlent  to arr[2]
    *(ptr+3) is equivlent  to arr[3]
    */
    cout << "\nvalues are : \n";
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;
}

