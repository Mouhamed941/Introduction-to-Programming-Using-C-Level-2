
#include <iostream>
using namespace std;


int ReadNumber()
{
	int Number;
	cout << "Please Enter a Number : ";
	cin >> Number;
	return Number;
}
string CheckIfPozitiveOrNigative(int Number)
{
	return (Number > 0) ? "Pozitive" : "Nigative";
}
string CheckIfZeroOrPozitiveOrNigative(int Number)
{
	return (Number == 0) ? "Zero " : (Number > 0) ? "Pozitive" : "Nigative";
}
int main()
{
	int Number = ReadNumber();
	cout << CheckIfPozitiveOrNigative(Number) << endl;
	cout <<"Number is " << CheckIfZeroOrPozitiveOrNigative(Number);
}
