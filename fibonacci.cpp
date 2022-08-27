#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, first=0, second=1, count=0,fibo;

    cout<< "Enter the fibonacci range : ";
    cin>> n;

    while(count<n)
    {
        if(count<=1)
            fibo= count;
        else
        {
            fibo= first + second;
            first = second;
            second = fibo;
        }
        cout<< " " <<fibo;
        count++;
    }


    getch();
}
