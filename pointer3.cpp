
#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
    int x=20, y=10,sum;

    int *ptr1, *ptr2;

    ptr1= &x;
    ptr2= &y;

    sum= *ptr1 + *ptr2;

    cout<< "Sum is : "<<sum<<endl;


    getch();
}

