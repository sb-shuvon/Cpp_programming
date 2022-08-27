
#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    int x=5,y=10;

    int *p;

    cout<< "Value of x : "<<x<<endl;
    cout<< "Address of x : "<<&x<<endl;
    cout<< "Value of p : "<<p<<endl;
    cout<< "Value of *p : "<<*p<<endl;
    cout<< "Address of *p : "<<*&p<<endl;


    getch();
}

