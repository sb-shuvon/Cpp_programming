#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    float num1, num2, num3,sum, avg;

    cout<< "Enter first number : ";
    cin>> num1;

    cout<< "Enter second number : ";
    cin>> num2;

    cout<< "Enter third number : ";
    cin>> num3;

    sum= num1 + num2 + num3;
    cout<< "Sum = " <<sum<<endl;

    avg= (float)sum/3;
    cout<< "Average: "<<avg

    getch();
}
