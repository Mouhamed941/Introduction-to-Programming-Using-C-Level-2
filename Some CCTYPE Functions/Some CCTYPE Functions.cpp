// Some CCTYPE Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>

using namespace std;
int main()
{
	char X = 'A';
	char W = 'a';
	X = tolower(X);
	W = toupper(W);
	cout << "Converting A To a : " << X << endl;
	cout << "Converting a To A : " << W << endl;

	//Digits from A TO Z
	//return 0 if not ,and return non zero if yes
	cout << "isupper('A') " << isupper('A') << endl;

	//lowercase from a to z
	//return 0 if not ,and return non zero if yes
	cout << "islower('a') " << islower('a') << endl;


	


}


