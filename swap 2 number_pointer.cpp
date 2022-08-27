#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a= 10, b=20;
    int *p1= &a, *p2= &b;

    cout<< "Before swapping: *p1 = "<<*p1 << " " << "*p2 = " << *p2<<endl;;

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    cout<< "Befor swapping : *p1= "<<*p1 <<" "<<"*p2= "<<*p2;


    getch();
}
