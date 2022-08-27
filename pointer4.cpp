
#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    int x=5, y=7,temp;

    int *ptr1, *ptr2;

    ptr1= &x;
    ptr2= &y;

    cout<< "Before swapping: "<<endl;
    cout<< "x= "<<x<<endl;
    cout<< "x= "<<y<<endl;

    temp= *ptr1;
    *ptr1= *ptr2;
    *ptr2= temp;

    cout<< "After swapping: "<<endl;
    cout<< "x= "<<x<<endl;
    cout<< "x= "<<y<<endl;


    getch();
}

