#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i, n, fact= 1;

    cout<< "Enter any positive number : ";
    cin>> n;

    for(i=1; i<n; i++)
    {
        fact= fact+i;
    }

    cout<< n <<" Factorial = "<< fact<<endl;


    getch();
}

