#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    float C, F;

    cout<< "Enter Centigrade Temperature : ";
    cin>> C;

    F = (C*1.8)+32;
    cout<< "Fahrenheit Temparature : "<<F;


    getch();
}
