#include<iostream>
#include<conio.h>
using namespace std;

int squre(int a)
{
    return a * a;
}

int main()
{
    int num,result;

    cout<< "Enter any integer number: ";
    cin>> num;

    result= squre(num);

    cout<< num<< " of squre: "<< result;


    getch();
}
