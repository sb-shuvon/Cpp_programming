#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1, num2, large;

    cout<< "Enter two number : ";
    cin>> num1>> num2;

    large= num1> num2 ? num1 : num2;
    cout<< "Large number are: "<<large;

    getch();
}
