#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout<< "Enter Two number : ";
    cin>> num1>> num2;

    cout<< "Enter Operator +,-,*,/,%, ";
    cin>> op;

    switch(op)
    {
    case '+':
    {
        cout<< num1 << op << num2 << "= " << num1+num2<<endl;
        break;
    }
    case '-':
    {
        cout<< num1 << op << num2 << "= " << num1-num2<<endl;
        break;
    }
    case '*':
    {
        cout<< num1 << op << num2 << "= " << num1*num2<<endl;
        break;
    }
    case '/':
    {
        cout<< num1 << op << num2 << "= " << num1/num2<<endl;
        break;
    }


    }

    getch();
}
