

//2^3 = 2*2*2= 8
//2^4 = 2*2*2*2= 16
//3^4 = 3*3*3*3= 81

#include<iostream>
#include<conio.h>
using namespace std;

void power(double b, double e)
{
    int i, result=1;
    for(i=1;i<=e; i++)
    {
        result= b*e;
    }

    cout<< result;
}

int main ()
{
    double base, exp;

    cout<< "Enter base: ";
    cin>> base;

    cout<< "Enter exponent : ";
    cin>> exp;

    power(base, exp);


    getch();
}
