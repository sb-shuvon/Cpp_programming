#include<iostream>
#include<conio.h>
using namespace std;

void change(int datar)
{
    datar = 5;
    cout<< "Value of the data is : " <<datar;
}

int main()
{
    int data=7,result;

    change(data);


    getch();
}
