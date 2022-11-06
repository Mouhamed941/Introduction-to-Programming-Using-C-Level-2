#include <iostream>
using namespace std;
void SwapNumbers(int *Number1, int *Number2)
{
    int Plate = *Number1;
    *Number1 = *Number2;
    *Number2 = Plate;
    cout << Number1 << endl;
}
int main()
{
    int a = 5, b = 10;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    SwapNumbers(&a, &b);
    cout << "a value after swap : " << a << endl;
    cout << "b value after swap : " << b << endl;
}


