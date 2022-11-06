// Append Mode Append Data to File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	fstream  MyFile;
	MyFile.open("MyFile.txt", ios::out|ios::app);     //append Mode

	if (MyFile.is_open())
	{

		MyFile << "This is the first line\n";
		MyFile << "This is the seconde line\n";
		MyFile << "This is the third line\n";
		MyFile << "Mouhamed\n";
		MyFile << "Housein\n";
		MyFile << "hazem\n";
		MyFile.close();
	}
}

