#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};

    int *ptr;

    ptr = a;

    ptr = ptr + 1;

    cout<< "Value of second element of array : "<<ptr <<endl;
    cout<< "Value of second element of array : "<<*ptr <<endl;
    cout<< "Value of second element of array : "<<&ptr <<endl;



    getch();
}
