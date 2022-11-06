// Float Format (printf).cpp : This file contains the 'main' function. Program execution begins and ends there.8tsz 
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    float PI = 3.14159;
    printf("precision specification of %.*f \n" ,1,PI);     //3.1
    printf("precision specification of %.*f \n", 2, PI);    //3.14  
    printf("precision specification of %.*f \n", 3, PI);    //3.142
    printf("precision specification of %.*f \n", 4, PI);    //3.1416
    float x = 7.000, y = 9.000;

    printf("The float division is : %.3f / %.3f = %.3f\n\n",x,y,x/y);
}                                           


