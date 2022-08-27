// 1.5 + 2.5 + 3.5..... +n=?

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, i=1.5, sum=0;

    cout<< "Enter the last value of series: ";
    cin>> n;

    cout<< "1.5 + 2.5 + 3.5..... +"<<n<< "= ";

    while(i<=n)
    {
        sum= sum+i;
        i++;
    }
    cout<< sum;




    getch();
}
