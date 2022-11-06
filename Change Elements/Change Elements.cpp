#include <iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector <int> Numbers = { 1,2,3,4,5 };

    for (const int& Number : Numbers)
    {
        cout << Number << " ";
    }
    cout << "\n updated elemants" << endl;
    for (int& Number : Numbers)
    {
        Number = 10;
        cout << Number << " ";
    }
    cout << endl;
    Numbers[0] = 8;
    Numbers.at(3) = 6;
    Numbers[4] = 35;
    for (const int& Number : Numbers)
    {
        cout << Number << " ";
    }
}


