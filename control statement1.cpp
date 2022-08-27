//control statement - conditional control statement- loop control statement
//conditional control statement- if-else , switch

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;

    cout<< "Enter any number : ";
    cin>> num;

    if(num%2==0)
    {
        cout<< num << " is Even"<<endl;
    }
    if(num%2!=0)
    {
        cout<< num << " is Odd"<<endl;
    }


    getch();
}


