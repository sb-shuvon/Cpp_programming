#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char str[50];
    int i, capital, small, digit;

    i=capital=small= digit= 0;

    cout<< "Enter a string: ";
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
            capital++;

        else if(str[i]>=97 && str[i]<=122)
            small++;

        else if(str[i]>=48 && str[i]<=57)
            digit++;


        i++;
    }

    cout<< "Number of capital letter: "<<capital<<endl;
    cout<< "Number of small letter: "<<small<<endl;
    cout<< "Number of digit letter: "<<digit<<endl;


    getch();
}

