#include<iostream>
#include<conio.h>
using namespace std;

int swap(int &p, int &q)
{
    int temp;

    temp= p;
    p= q;
    q= temp;
}

int main()
{
    int a=20, b=30;

    swap(a,b);

    cout<< "Value of is a= "<< a<<endl;
    cout<< "Value of is b= "<< b<<endl;



    getch();
}
