
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number,count=0,i;

    cout<< "Enter a number : ";
    cin>> number;

    for(i=2; i<number; i++)
    {
        if(number%2==0)
        {
            count++;
            break;
        }
    }

    if(count==0)
    {
        cout<< "Prime number";
    }
    else
        cout<< "Not a prime number";

    getch();
}
