
// uppercase letter to lowercase letter convert


#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    char small,upper;

    cout<< "Enter any uppercase letter : ";
    cin>> upper;

    small = tolower(upper);

    cout<< "The upper character is: "<<small;

    getch();
}
