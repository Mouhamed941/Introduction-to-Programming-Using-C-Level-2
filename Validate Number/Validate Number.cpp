// Validate Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadNumber()
{
    int Number;
    cout << "Please Enter a Number : ";
    cin >> Number;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Number ,Enter a valid one :" << endl;
        cin >> Number;
    }
    return Number;
}
int main()
{
    int Number = ReadNumber();
    cout << "Your Number is : " << Number << endl;
}


