#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int choice;
    float temp,convertedTemp;

    cout<< "Temperature conversion menu"<<endl;
    cout<< "1.Fahrenheit to Celsius"<<endl;
    cout<< "2.Celsius to Fahrenheit"<<endl<<endl;

    cout<< "Enter your choice : ";
    cin>> choice;

    switch(choice)
    {
    case 1:
    {
        cout<< "Enter Fahrenheit : ";
        cin>> temp;

        convertedTemp = (temp-32)/1.8;
        cout<< "The Temperature in Celsius : "<<convertedTemp<<endl;
        break;
    }

    case 2:
    {
        cout<< "Enter Celsius : ";
        cin>> temp;

        convertedTemp = (temp*1.8)+32;
        cout<< "The Temperature in Fahrenheit : "<<convertedTemp<<endl;
        break;
    }
    default:
        cout<< "Not a correct option";

    }




    getch();
}
