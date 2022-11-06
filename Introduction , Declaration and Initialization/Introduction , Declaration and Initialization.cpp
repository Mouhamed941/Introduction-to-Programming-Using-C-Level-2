// Introduction , Declaration and Initialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector <int> vNumbers = { 1,2,3,4,5 };
	cout << "Numbers vector = ";
	for (int &Number : vNumbers)
	{
		cout << Number << " ";
	}
	cout << endl;
	vector <string> Names = { "Mouhamed","Ahmed","Huesin","Ali" };
	for  (string &Name: Names)
	{
		cout << Name << " ";
	}
	cout << endl;

	vector <char> Letters = { 'A','B','C','D' };
	for (char& Letter : Letters)
	{
		cout << Letter << " ";
	}
	cout << endl;

	/*vector<bool> Results = { 1,0 };
	for (bool& Result : Results)
	{
		cout << Result;
	}*/
}


