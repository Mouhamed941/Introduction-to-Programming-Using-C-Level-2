// Vectors Add elements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;
int ReadNumber()
{
    cout << "Please Enter a Number : ";
    int Number;
    cin >> Number;
    return Number;
}
void AddNumber( vector <int>& vNumbers)
{
    char Continue = 'Y';
    int Number;
    do
    {
        Number = ReadNumber();
        vNumbers.push_back(Number);
        cout << "Do You want to add more numbers ? Y/N ? ";
        cin >> Continue;
    } while (Continue=='Y'|| Continue=='y');
}
void PrintNumbers(vector <int> vNumbers)
{
    for (int& Number : vNumbers)
    {
        cout << Number << endl;
    }
}
int main()
{
    vector <int> vNumbers;
    
    AddNumber(vNumbers);
    PrintNumbers(vNumbers);
    

    /*vector <string> Cities;
    Cities.push_back("Istanbul");
    Cities.push_back("Ankara");
    Cities.push_back("Adana");
    Cities.push_back("Halep");
    Cities.push_back("Izmir");

    for (int& Number : vNumbers)
    {
        cout << Number << endl;
    }
    for (string& City : Cities)
    {
        cout << City << endl;
    }*/

    
}


