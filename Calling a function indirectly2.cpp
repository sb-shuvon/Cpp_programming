#include<iostream>
#include<conio.h>
using namespace std;

void printname(char *name)
{
    cout<< "Name is: "<<name<<endl;
}

int main()
{
    char s[20];
    void (*ptr)(char*);

    ptr= printname;

    cout<< "Enter the name of person : ";
    cin>> s;
    cout<< s;


    getch();
}
