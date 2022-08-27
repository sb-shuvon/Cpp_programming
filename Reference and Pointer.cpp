#include<iostream>
#include<conio.h>
using namespace std;
void func(int &);

int main()
{
    int a=10;
    cout<< "Value of 'a' is : "<<a<<endl;

    func(a);
    cout<< "Value of 'a' is : "<<a<<endl;


    getch();
}

void func(int &m)
{
    m=20;
}
