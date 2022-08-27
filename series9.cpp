// 1-2 + 3-4 + 5-6+.....
// sum= (1+3+5+...) + (2+4+6+....)


#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, i, sum=0, even=0, odd= 0;

    cout<< "Enter last term = ";
    cin>> n;

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            even= even+i;
        else
            odd= odd+i;
    }

    sum= odd-even;
    cout<< "Sum= ",sum;


    getch();
}
