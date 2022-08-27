#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a= 12;
    int &b= a;
    int &c= a;

    cout<< "Value of a = "<<a<<endl;
    cout<< "Value of b = "<<b<<endl;
    cout<< "Value of c = "<<c<<endl;


    getch();
}
