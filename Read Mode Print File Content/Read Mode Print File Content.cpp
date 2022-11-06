

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void PrintFileContent(string FileName)
{
	fstream Myfile;
	Myfile.open(FileName, ios::in);
	if (Myfile.is_open())
	{
		string Line;
		while (getline(Myfile, Line))
		{
			cout << Line << endl;
		}
		Myfile.close();
	}
}
int main()
{
	PrintFileContent("MyFile.txt");
}

