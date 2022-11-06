// Pointers and Structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct stEmployee {
    string Name;
    float Salary;
};
int main()
{
    stEmployee Employee,*ptr;
    Employee.Name = "Mouhamed FARDOUSI";
    Employee.Salary = 7500;
    cout << Employee.Name << endl;
    cout << Employee.Salary << endl;

    ptr = &Employee;
    cout << ptr->Name << endl;
    cout << ptr->Salary << endl;

}

