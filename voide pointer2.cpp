#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    void *ptr;
    int *ptr1;

    int data = 10;

    ptr = &data;
    ptr1 = (int *)ptr;

    cout<< "The value of *ptr1 is : " <<*ptr1;



    getch();
}
