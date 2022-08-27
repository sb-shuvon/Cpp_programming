#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x=10, y=20, z= 30;

    int *ptr;

    ptr= &x;
    cout<< "x= "<<*ptr<<end;

    ptr= &x;
    cout<< "x= "<<ptr<<endl;

    ptr= &y;
    cout<< "y= "<<*ptr<<endl;


    getch();
}
