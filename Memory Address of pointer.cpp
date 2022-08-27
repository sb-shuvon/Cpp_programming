#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i;
    int &a= i;

    cout<< "The address of a 'a' variable : "<<&a<<endl;
    cout<< "The address of a 'i' variable : "<<&i<<endl;


    getch();
}
