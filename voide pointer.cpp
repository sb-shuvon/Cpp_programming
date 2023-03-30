#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    void *ptr;
    int a=9;

    ptr = &a;

    cout<< &a <<endl;
    cout<< ptr <<endl;


    getch();
}
