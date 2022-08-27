#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2,temp;

    num1= 20;
    num2= 30;

    temp= num1;
    num1= num2;
    num2= temp;

    cout<< "Num 1= "<< num1<<endl;
    cout<< "Num 2= "<< num2;


    getch();
}
