
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n1,n2,n3;

    cout<< "Enter 3 number : ";
    cin>> n1>> n2 >> n3;

    if(n1>n2 && n1>n3)
    {
        cout<< "Large number are : "<< n1<<endl;
    }
    else if(n2>n1 && n2>n3)
    {
        cout<< "Large number are : "<< n2<< endl;
    }
    else if(n3>n1 && n3>> n2)
    {
        cout<< "Large number are : "<<n3<<endl;
    }
    else
    {
        cout<< "Numbers are equal";
    }



    getch();
}

