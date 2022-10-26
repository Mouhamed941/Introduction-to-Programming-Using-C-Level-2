// Function Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int MySum(int a, int b)
{
    return a + b;
}
int MySum(int a, int b, int c)
{
    return a + b + c;
}
double MySum(double a, double b)
{
    return a + b ;
}
double MySum(double a, double b,double c)
{
    return a + b + c;
}

int main()
{
    cout << MySum(4, 2) << endl;        // 6
    cout << MySum(4, 5, 3) << endl;   // 12  
    cout << MySum(5.1, 3.0) << endl;    // 8.1
    cout << MySum(1.2, 4.8, 3.5);     // 9.5  

}


