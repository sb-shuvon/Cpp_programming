#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i=1;

    do
    {
        int j=1;
        do
        {
            cout<< i << " " <<j <<endl;
            j++;
        }
        while(j<=3);
        i++;
    }
    while(i<=3);


    getch();
}
