#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;

    cout<< "Enter any number : ";
    cin>> num;

    if(num>0)
    {
        cout<< "Positive";
    }
    else if(num<0)
        cout<< "Nagetive";

    else
        cout<< "Number is Zero";

    getch();
}
