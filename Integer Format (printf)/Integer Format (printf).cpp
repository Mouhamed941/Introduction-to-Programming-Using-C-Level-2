// Integer Format (printf).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int Page = 1,  TotalPage = 10;
    printf("The page number is : %d \n", Page);
    printf("You are in page %d of %d \n", Page, TotalPage);

    printf("The page number is : %0*d \n",2, Page);
    printf("The page number is : %0*d \n", 3, Page);
    printf("The page number is : %0*d \n", 4, Page);
    int Number1 = 10, Number2 = 15;
    printf("The Result of %d + %d = %d\n", Number1, Number2, Number1 + Number2);
}

