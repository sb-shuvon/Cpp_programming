#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int base, height, area;

    cout<< "Enter base : ";
    cin>> base;

    cout<< "Enter Height : ";
    cin>> height;

    area = 0.5 * base * height;
    cout<< "Area of Triangle : "<< area;


    getch();
}
