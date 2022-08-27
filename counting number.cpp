
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num,rem,count=0, temp;

    cout<< "Enter any number : ";
    cin>> num;

    temp= num;

    while(temp!=0)
    {
        rem= temp%10;
        ++count;
        temp= temp/10;
    }
    cout<< "Counting number are : "<<count;

    getch();
}

