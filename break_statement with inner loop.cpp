#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,j;

    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            if(i==2 && j==2)
            {
                break;
            }
            cout<< i << " " <<j <<"\n";
        }
    }


    getch();
}
