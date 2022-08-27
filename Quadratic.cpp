#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b,c,d,x1,x2;

    cout<< "Enter a,b,c = ";
    cin>> a>>b>>c;

    d= sqrt(b*b-4*a*c);

    x1= (-b+d)/2*a;
    x= (-b-d)/2*a;

    cout<< "X1 = "<<x1<<endl;
    cout<< "X2 = "<<x2<<endl;

    getch();
}
