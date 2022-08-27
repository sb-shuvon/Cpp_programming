/*

N=5

1
22
333
4444
55555

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
        for(col=1; col<=row; col++)
        {
            cout<< row <<" ";
        }
        cout<< endl;
    }




    getch();
}
