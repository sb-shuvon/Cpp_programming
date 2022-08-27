#include<iostream>
#include<conio.h>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

int main()
{
    int (*funcptr)(int,int);
    funcptr= add;

    int sum= funcptr(5,6);

    cout<< "Value of sum : "<<sum <<endl;


    getch();
}
