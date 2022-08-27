#include<iostream>
#include<conio.h>
using namespace std;

int sum (int a, int b)
{
    return a+b;
}

int sum3 (int a, int b,int c)
{
    return a+b+c;
}

int main()
{
    int num1, num2,num3,result;

    cout<< "Enter three numbers: ";
    cin>> num1>> num2>>num3;

    result= sum3(num1,num2,num3);

    cout<< "The sum is= "<<result<<endl;

    cout<< "Enter two numbers: ";
    cin>> num1>> num2;

    result= sum(num1,num2);

    cout<< "The sum is= "<<result<<endl;

    cout<< "Enter two numbers: ";
    cin>> num1>> num2;

    result= sum(num1,num2);

    cout<< "The sum is= "<<result<<endl;

    cout<< "Enter two numbers: ";
    cin>> num1>> num2;

    result= sum(num1,num2);

    cout<< "The sum is= "<<result<<endl;


    getch();
}


