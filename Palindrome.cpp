
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num,temp, rem, sum=0;

    cout<< "Enter any number: ";
    cin>> num;

    temp= num;

    while(temp!=0)
    {
        rem= temp%10;
        sum= sum * 10 + rem;
        temp= temp/10;
    }
    if(num==sum)
    {
        cout<<"Palindrome"<<endl;
    }
    else
        cout<< "Not a Palindrome";


    getch();
}
