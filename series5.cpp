#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, i=1, sum= 0;

    cout<< "Enter last number of series: ";
    cin>> n;

    cout<< "1 + 4 + 7 + ....."<< n << "=";

    while(i<=n)
    {
        sum= sum+i;
        i= i+3;
    }
    cout<< sum;



    getch();
}
