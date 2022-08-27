#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i;
    for(i=1; i<=20; i++)
    {
        if (i%3==0)
        continue;
    cout<< i<<endl;

    if(i==10)
        break;

    }



    getch();
}



