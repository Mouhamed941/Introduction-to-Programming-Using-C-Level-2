// Default Parameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int SumNumbers(int a, int b, int c = 0, int d = 0)
{
    return a + b + c + d;
}
string PrintFullName(string FirstName = "Mouhamed", string LastName = "Fardousi")
{
    return FirstName + " " + LastName;
}
int main()
{
    cout << SumNumbers(10, 20) << endl; // 30
    cout << SumNumbers(10, 20, 30) << endl; // 60
    cout << SumNumbers(10, 20, 30, 40) << endl; //100

    cout << PrintFullName("Huseein","Mahsun");


}

