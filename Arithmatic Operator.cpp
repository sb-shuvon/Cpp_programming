
// Write a program that

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1, num2, result;

    cout<< "Enter 2 numbers : ";
    cin>> num1 >> num2;

    result = num1 + num2;
    cout<< num1 << " + "<< num2 <<" = "<<result<<endl;

    result = num1 - num2;
    cout<< num1 << " - "<< num2 <<" = "<<result<<endl;

    result = num1 * num2;
    cout<< num1 << " * "<< num2 <<" = "<<result<<endl;

    result = num1 / num2;
    cout<< num1 << " / "<< num2 <<" = "<<result<<endl;

    result = num1 % num2;
    cout<< num1 << " % "<< num2 <<" = "<<result<<endl;



    getch();
}
