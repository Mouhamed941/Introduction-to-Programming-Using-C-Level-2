// Call Stack_Call Hierarchy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void Function4()
{
    cout << "Hi i am function 4 " << endl;
}
void Function3()
{
    Function4();
}
void Function2()
{
    Function3();
}
void Function1()
{
    Function2();
}
int main()
{
    Function1();
}
