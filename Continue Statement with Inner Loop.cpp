#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,j;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(i==3 && j==3)
            {
                continue;
            }
            cout<< i << " " <<j << "\n";
        }

    }



    getch();
}
