#include<iostream>
#include<conio.h>
using namespace std;

template <class MyTemplet1, class MyTemplet2>
MyTemplet1 add (MyTemplet1 a, MyTemplet2 b)
{
    return a+b;
}

int main()
{
    cout<< add(10,20.4)<<endl;


    getch();
}
