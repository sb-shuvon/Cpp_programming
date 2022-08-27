#include<iostream>
#include<conio.h>
using namespace std;

void sum (int a, int b, int c)
{
    cout<< "The sum is: "<<a+b+c<<endl;
}

void sub (int a, int b)
{
    cout<< "The sum is: "<<a-b<<endl;
}

int main()
{
    sum(10,20,30);
    sum(20,30,40);
    sum(70,60,50);
    sum(30,60,70);
    sub(20,30);


    getch();
}
