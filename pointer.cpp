#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number=30;
    int *p;

    p= &number;

    cout<< "Address of number variable : "<< &number <<endl;
    cout<< "Address of p variable : "<< p <<endl;
    cout<< "Value of p variable : "<< *p <<endl;



    getch();
}
