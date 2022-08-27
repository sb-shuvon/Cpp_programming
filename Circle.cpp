#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int radius,area, PI= 3.1416;

    cout<< "Enter Radius : ";
    cin>> radius;

    area = PI * radius * radius;
    cout<< "Area of Circle : "<<area<<endl;


    getch();
}
