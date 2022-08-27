#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    double x,y,result;

    cout<< "Enter X : ";
    cin>> x;

    cout<< "Enter Y : ";
    cin>> y;

    result= pow(x,y);

    cout<< "pow= "<<result;


    getch();
}
