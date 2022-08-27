#include<iostream>
#include<conio.h>
using namespace std;

void areaOfTraingle(float a, float b)
{
    int area;

    area= 0.5 * a * b;
    cout<< "Area of Triangle: "<< area;
}

int main()
{
    float base, height,area;

    cout<< "Enter base: ";
    cin>> base;

    cout<< "Enter height: ";
    cin>> height;

    areaOfTraingle(base, height);



    getch();
}
