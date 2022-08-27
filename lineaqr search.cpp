#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[]= {10,23, 20, 65,45};
    int value, pos= -1, i;

    cout<< "Enter the number of you want: ";
    cin>> value;

    for(i=0; i<5; i++)
    {
        if(value== a[i])
        {
            pos= i+1;
            break;
        }
    }

    if(pos== -1)
    {
        cout<< "Not found";
    }
    else
    {
        cout<< "The item of : "<< pos;
    }


    getch();
}
