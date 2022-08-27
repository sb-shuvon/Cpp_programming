
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num, temp, rem, fact= 1, sum=0,i;

    cout<< "Enter any number : ";
    cin>> num;

    temp= num;

    while(temp!=0)
    {
        rem= temp%10;

        for(i=1; i<=rem; i++)
        {
            fact= fact * i;
        }
        sum = sum+fact;
        temp= temp/10;
    }
    if(sum==num)
    {
        cout<< num<< "strong number";
    }
    else
        cout<< "Not a strong number";


    getch();
}

