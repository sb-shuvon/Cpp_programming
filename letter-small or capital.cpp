#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char ch;

    cout<< "Enter any letter : ";
    cin>> ch;

    if(ch>= 'a' && ch<='z')
    {
        cout<< ch << " is Small letter";
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<< ch << " is Capital letter";
    }
    else
        cout<< ch << " it's not a letter";


    getch();
}
