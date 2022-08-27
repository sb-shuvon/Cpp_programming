#include<iostream>
#include<conio.h>
using namespace std;

void display(int n[])
{
    int i;
    for(i=0; i<5; i++)
    {
        cout<< n[i]<<endl;
    }
}

int main()
{
    int num[]= {10,20,30,40,50};

    display(num);


    getch();
}
