#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, col, count=0;

    cout<< "Enter N: ";
    cin>> n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<< ++count<< " ";
        }
        cout<< endl;
    }




getch();
}

