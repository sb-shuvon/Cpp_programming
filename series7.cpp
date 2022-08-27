//1^2 + 2^2 + 3^2..... + n^n=

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, i=1, sum=0;

    cout<< "Enter the last value of series : ";
    cin>> n;

    cout<< "1^2 + 2^2 + 3^2..... +"<<n<<"= ";

    while(i<=n)
    {
        sum=sum+i*i;
        i++;
    }
    cout<< sum;


    getch();
}
