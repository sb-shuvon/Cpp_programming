#include<iostream>
#include<conio.h>
using namespace std;

void display()
{
    static int i=0;
    int j=0;

    i++;
    j++;

    cout<< i << " "<<j << "\n";
}

int main()
{
    display();
    display();
    display();


    getch();
}
