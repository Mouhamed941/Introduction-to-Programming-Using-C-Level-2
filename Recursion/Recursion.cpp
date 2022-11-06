// Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void PrintNumbers(int Num1, int Num2)
{
	if (Num2 >= Num1)
	{
		cout << Num2 << endl;
		PrintNumbers(Num1,Num2 - 1);
	}
}
int CalculatePower(int Base, int Power)
{
	static int Result = 1;

	if (Power >= 1)
	{
		Result *= Base;
		CalculatePower(Base, Power - 1);
	}
	else
		return 1;

	return Result;
}
int main()
{
	//PrintNumbers(1, 10);
	cout << CalculatePower(2, 3);
}

