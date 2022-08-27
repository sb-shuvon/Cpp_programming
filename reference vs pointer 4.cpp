#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[5]= {10,20,30,40,50};
    int *ptr;

    ptr= a;
    cout<< "The valu of *ptr : "<< *ptr<<endl;

    ptr= ptr + 1;
    cout<< "The value of *ptr : "<< *ptr;


    getch();
}
