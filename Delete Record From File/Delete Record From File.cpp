#include <iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
void LoadDataFromFileToVector(string FileName, vector <string>& vFileContent)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in);
    if (MyFile.is_open())
    {   
        string Line;
        while (getline(MyFile,Line))
        {
            vFileContent.push_back(Line);
        }
    }
    MyFile.close();
}
void SaveVectorToFile(string FileName, vector <string> vFileContent)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);
    string Line;
    if (MyFile.is_open())
    {
        for (string& Line : vFileContent)
        {
            if (Line != "")
            {
                MyFile << Line<<endl;
            }
        }
        MyFile.close();

    }
}
void DeleteRecordFromFile(string FileName, string record)
{
    vector <string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);
    for (string& Line : vFileContent)
    {
        if (record == Line)
        {
            Line = "";      
        }
    }
    SaveVectorToFile(FileName, vFileContent);
}
void PrintFileContent(string FileName)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in);
    string Line;
    if (MyFile.is_open())
    {
        while (getline(MyFile,Line))
        {
            cout << Line << endl;
        }
        MyFile.close();
    }
}
int main()
{
    cout << "Content Befor Delete\n";
    PrintFileContent("MyFile.txt");

    DeleteRecordFromFile("MyFile.txt", "Ali");

    cout << "Content After Update\n";
    PrintFileContent("MyFile.txt");
   
}


