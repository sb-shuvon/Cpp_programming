/*
    Enter any number : n

    n X i = ans

*/


#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    while(1)
    {
        int i,n;

        cout<< "Enter any number : ";
        cin>> n;

        for(i=1; i<=10; i++)
        {
            cout<< n <<" X "<< i <<"= "<<n*i<<endl;
        }
    }


    getch();
}
