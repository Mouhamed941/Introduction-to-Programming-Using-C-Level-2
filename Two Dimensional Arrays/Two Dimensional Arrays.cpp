// Two Dimensional Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[4][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
};
int arr2[10][10] = {
    {}
};

string ColumSperator(int i)
{
    if (i < 10)
    {
        return "   ";
    }
    else
        return "  ";
}
int main()
{
    /*for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cout << arr[i][j] << ColumSperator(arr[i][j]);
        }
        cout << endl;
    }*/
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr2[i][j] = (i+1) * (j+1);
            
            printf("%0*d ", 2, arr2[i][j]);
        }
        cout << endl;
    }

}


