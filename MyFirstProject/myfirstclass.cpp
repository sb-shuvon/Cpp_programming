#include<iostream>
#include "myfirstclass.h"
using namespace std;


MyFirstClass::MyFirstClass()
{
    cout<< "Innside the constractor"<<endl;;
}

void MyFirstClass :: display()
{
    cout<< "Inside the display function"<<endl;
}
