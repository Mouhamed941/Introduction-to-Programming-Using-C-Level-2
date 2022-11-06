// Access Elements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> Numbers = { 1,2,3,4,5 };

    cout << "Access using at(i) : " << endl;
    cout << "Element at index 0 is : " << Numbers.at(0) << endl;
    cout << "Element at index 1 is : " << Numbers.at(1) << endl;
    cout << "Element at index 2 is : " << Numbers.at(2) << endl;
    cout << "Element at index 3 is : " << Numbers.at(3) << endl;
    cout << "Element at index 4 is : " << Numbers.at(4) << endl;


    cout << "Access using [i] : " << endl;
    cout << "Element at index 0 is : " << Numbers[0] << endl;
    cout << "Element at index 1 is : " << Numbers[1] << endl;
    cout << "Element at index 2 is : " << Numbers[2] << endl;
    cout << "Element at index 3 is : " << Numbers[3] << endl;
    cout << "Element at index 4 is : " << Numbers[4] << endl;
}                                          