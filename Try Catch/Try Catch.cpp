// Try Catch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector <int>Numbers = { 1,2,3,4,5 };

	try
	{
		cout << Numbers.at(5);
	}
	catch (const std::exception&)
	{
		cout << "out of band" << endl;
	}
}


