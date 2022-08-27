#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2;

    cout<< "Enter 2 number : ";
    cin>> num1>> num2;

    if(num1>num2)
    {
        cout<< "Large number are "<<num1<<endl;
    }
    else if(num1<num2)
    {
        cout<< "Large number are "<< num2 << endl;
    }
    else
        cout<< "Numbers ar equal";



    getch();
}
