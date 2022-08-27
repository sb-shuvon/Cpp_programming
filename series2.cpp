#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, i, sum= 0;

    cout<< "Enter The last number of series: ";
    cin>> n;

    while(i<=n)
    {
        sum= sum+i;
        i= i+2;
    }
    cout<< "2 + 4 + 6 + ..."<< n << "="<< sum<<endl;


    getch();
}
