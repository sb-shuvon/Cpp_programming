#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    float a,b,c,s,area;

    cout<< "Enter a : ";
    cin>> a;

    cout<< "Enter b : ";
    cin>> b;

    cout<< "Enter c : ";
    cin>> c;

    s = (a+b+c)/2;

    area= sqrt (s*(s-a)*(s-b)*(s-c));
    cout<< "Area of Triangle: "<< area<<endl;


    getch();
}
