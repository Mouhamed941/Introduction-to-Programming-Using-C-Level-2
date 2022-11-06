#include <iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;
void SaveVectorToFile(string FileName, vector <string> vFileContent)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out);
	string Line;
	if (MyFile.is_open())
	{
		for (string& Line : vFileContent)
		{
			if (Line!="")
			{
				MyFile << Line ;
			}
		}
		MyFile.close();
	
	}
}
int main()
{
	string FileName = "MyFile.txt";
	vector<string> vFileContent = { "Ali","Omar","Abdullah"};
	SaveVectorToFile(FileName, vFileContent);
	cout << "Data Saved Successfully" << endl;
}


