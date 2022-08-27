
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num,sum=0,rem,temp;

    cout<< "Enter any number : ";
    cin>> num;

    temp= num;

    while(temp!=0)
    {
        rem= temp % 10;
        sum= sum + rem;
        temp = temp/10;
    }

    cout<< "Sum of digit : "<<sum;



    getch();
}

