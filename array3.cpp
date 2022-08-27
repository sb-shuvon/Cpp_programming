#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num[100], n, i;

    cout<< "How many number : ";
    cin>> n;

    for(i=0; i<n; i++)
    {
        cin>> num[i];
    }

    int max= num[0];

    for(i=1; i<n; i++)
    {
        if(max<num[i])
            max= num[i];
    }
    cout<< "Maximum is: "<< max;


    getch();
}
