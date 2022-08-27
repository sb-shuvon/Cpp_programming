#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int *p;
    int a= 8;
    int **q;

    p= &a;
    q= &p;

    cout<< "The value of q : "<< *q<<endl;

    getch();
}
