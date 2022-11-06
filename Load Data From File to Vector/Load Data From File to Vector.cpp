
#include <iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;
void LoadDataFromFileToVector(string Filename, vector <string>& vFileContent)
{
	fstream MyFile;
	MyFile.open(Filename, ios::in);	//Read Mode

	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile,Line))
		{
			vFileContent.push_back(Line);
		}
		MyFile.close();
	}
}
int main()
{
	vector <string> vFileContent;
	string FileName = "MyFile.txt";
	LoadDataFromFileToVector(FileName, vFileContent);
	for (string& Line : vFileContent)
	{
		cout << Line << endl;
	}
}

