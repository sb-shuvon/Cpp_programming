#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col;

    cout<< "Enter N: ";
    cin>> n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            cout<< " ";
        }
        for(col=1 ; col<=row*2-1; col++)
        {
            cout<< "*";
        }
        cout<< endl;
    }

    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<= n-row; col++)
        {
            cout<< " ";
        }
        for(col=1; col<=row*2-1; col++)
        {
            cout<< "*";
        }
        cout<<endl;
    }


    getch();
}
