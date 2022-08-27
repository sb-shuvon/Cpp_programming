// 1 + 1/2 + 1/3 + .... 1/n=?

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, i, sum=0;

    cout<< "Enter the last value of series : ";
    cin>> n;

    cout<< "1 + 1/2 + 1/3 + .... 1/"<<n<< "= ";

    for(i=1; i<=n; i++)
    {
        sum= sum + (1/i);
    }
    cout<< sum;


    getch();
}
