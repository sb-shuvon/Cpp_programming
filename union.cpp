#include<iostream>
#include<conio.h>
using namespace std;

union test
{
    int x,y;
};

int main()
{
    union test t1;

    t1.x= 20;

    cout<< "X= "<<t1.x<<endl;
    cout<< "Y= "<<t1.y<<endl;

    t1.y= 10;

    cout<< "Y= "<<t1.y<<endl;
    cout<< "X= "<<t1.x<<endl;


    getch();
}
