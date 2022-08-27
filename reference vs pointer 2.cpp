#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int k;
    int *p;

    p= &k;

    cout<< "The memory address of p variable : "<< &p;
    cout<< "\nThe memory address of k variable : "<< &k;


    getch();
}
