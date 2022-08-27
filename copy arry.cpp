#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int array1[5], array2[5],i,n;

    cout<< "Enter How many number: ";
    cin>> n;

    for(i=0; i<n; i++)
    {
        cin>> array1[i];
    }

    cout<< "Array 1 "<<endl;;
    for(i=0; i<n; i++)
    {
        cout<< array1[i] <<" ";
    }

    for(i=0; i<n; i++)
    {
        array2[i]= array1[i];
    }

    cout<< endl;

    cout<< "Array 2"<<endl;
    for(i=0; i<n; i++)
    {
        cout<< array2[i]<< " ";
    }


    getch();
}
