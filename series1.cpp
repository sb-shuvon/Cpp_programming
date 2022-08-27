#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, i, sum=0;

    cout<< "Enter The last number: ";
    cin>> n;

    for(i=1; i<=n; i++)
    {
        sum= sum+i;
    }
    cout<< "1 + 2 + 3 + .... "<< n << " = " <<sum<<endl;

    getch();
}
