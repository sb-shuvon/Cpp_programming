#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char s1[]= "Nilima Tasnim Bappi";

    int i=0,len=0;

    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    cout<<"lenght = "<<len ;


    getch();
}


