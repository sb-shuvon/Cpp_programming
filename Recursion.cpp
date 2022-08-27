#include<iostream>
#include<conio.h>
using namespace std;

int fact(int n)
{
    if(n==1)
        return 1;
    else
        n*fact(n-1);
}

int main()
{
    int factorial;

    factorial= fact(5);
    cout<< factorial <<endl;


    getch();
}
