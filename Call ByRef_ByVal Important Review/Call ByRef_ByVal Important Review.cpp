// Call ByRef_ByVal Important Review.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Function1(int x)
{
    x++;
}

void Function2(int &x)
{
    x++;
}

int main()
{
    int a = 10;

    Function1(a);
    cout << "a After calling Function1 by Val : " << a << endl;

    Function2(a);
    cout << "a After calling Function2 by Ref : " << a << endl;

    cout << "variable value : " << a << endl;
    cout << "variable Ref Address : " << &a << endl;

}


