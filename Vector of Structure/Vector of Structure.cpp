// Vector of Structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

struct stPerson
{
    string FirstName;
    string LastName;
    string Address;
    int Age;
    string Email;
};
struct stEmployee
{
    string FirstName;
    string LastName;
    string Address;
    int Age;
    string Email;
};
stEmployee ReadEmployee(stEmployee Employee)
{
    
    cout << "Please Enter Employee's First Name : " << endl;
    cin >> Employee.FirstName;

    cout << "\nPlease Enter Employee's Last Name : " << endl;
    cin >> Employee.LastName;

    cout << "\nPlease Enter Employee's Address : " << endl;
    cin >> Employee.Address;

    cout << "\nPlease Enter Employee's Age : " << endl;
    cin >> Employee.Age;

    cout << "\nPlease Enter Employee's Email : " << endl;
    cin >> Employee.Email;
    return Employee;
}

void AddEmployees(stEmployee Employee, vector <stEmployee>& vEmployee)
{
    char Continue = 'Y';
   
    do
    {
        Employee = ReadEmployee(Employee);
        vEmployee.push_back(Employee);
        cout << "Do You want to add more employees ? Y/N ?  ";
        cin >> Continue;

    } while (Continue=='Y'||Continue=='y');
}
void PrintEmployees(vector <stEmployee>& vEmployees)
{
    for (stEmployee& Employee : vEmployees)
    {
        cout << "First Name : " << Employee.FirstName << endl;
        cout << "Last Name : " << Employee.LastName << endl;
        cout << "Address : " << Employee.Address << endl;
        cout << "Age : " << Employee.Age << endl;
        cout << "Email : " << Employee.Email << endl;
        cout << "___________________________________________________" << endl;
    }
}
int main()
{
    /*stPerson Person;
    vector <stPerson> vPersons;
    Person.FirstName = "Mouhamed";
    Person.LastName = "FARDOUSI";
    Person.Address = "Kirazli mah 1130 sok";
    Person.Email = "fardosi1994@gmail.com";
    Person.Age = 28;
    vPersons.push_back(Person);

    
    Person.FirstName = "Ali";
    Person.LastName = "Vali";
    Person.Address = "Bağcılar mah 1130 sok";
    Person.Email = "alivali589@gmail.com";
    Person.Age = 30;

    
    
    vPersons.push_back(Person);


    for (stPerson& person : vPersons)
    {
        cout << "First Name : " << person.FirstName << endl;
        cout << "Last Name : " << person.LastName << endl;
        cout << "Address : " << person.Address << endl;
        cout << "Age : " << person.Age << endl;
        cout << "Email : " << person.Email << endl;
        cout << "___________________________________________________" << endl;
    }*/
    stEmployee Employee;
    vector<stEmployee> vEmployees;
    AddEmployees(Employee, vEmployees);
    PrintEmployees(vEmployees);
    
    
}

