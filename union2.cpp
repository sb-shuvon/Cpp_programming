#include<iostream>
#include<conio.h>
using namespace std;

union test1
{
    int x,y;
};

union test2
{
    char ch;
    int x;
};

union test3
{
    char name[20];
    double d;
};


int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;

    cout<< "Size Of (T1)= "<<sizeof(t1)<<endl;
    cout<< "Size Of (T2)= "<<sizeof(t2)<<endl;
    cout<< "Size Of (T3)= "<<sizeof(t3)<<endl;



    getch();
}

