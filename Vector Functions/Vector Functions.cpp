// Vector Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    
    cout <<"First Elemant : " << vNumbers.front() << endl;   //10
    cout << "Last Elemant : " << vNumbers.back() << endl;    //50

    //return the number of vector elemants
    cout << "Size : " << vNumbers.size() << endl;

    //check the oveall size of a vector
    cout << "Capacity : " << vNumbers.capacity() << endl;

    //returns 1(true) if the vector is empty
    cout << "empty  " << vNumbers.empty() << endl;
}


