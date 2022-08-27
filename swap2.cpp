#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1, num2;
    num1= 10;
    num2= 20;

    num1= num1 - num2;
    num2= num1 + num2;
    num1= num2 - num1;

    cout<< "Number 1= "<<num1<<endl;
    cout<< "Number 2= "<<num2<<endl;


    getch();
}
