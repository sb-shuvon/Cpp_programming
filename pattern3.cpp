/*
N=5
1
1 0
1 0 1
1 0 1 0

*/

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
        for(col=1; col<=row ; col++)
        {
            cout<< col%2 << " ";
        }
        cout<< endl;
    }


    getch();
}

