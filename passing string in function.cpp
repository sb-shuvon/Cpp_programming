#include<iostream>
#include<conio.h>
using namespace std;

void display(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        cout<< str<<endl;
        i++;

    }
}

int main()
{
    char str[]= "Nilima";
    display(str);


    getch();
}
