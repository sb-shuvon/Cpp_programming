#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int marks;

    cout<< "Enter your marks: ";
    cin>> marks;

    if(marks<0 || marks>100)
    {
        cout<< "Marks is invalid";
    }

    else if(marks>=80)
    {
        cout<< "A+"<<endl;
    }
    else if(marks>=70)
    {
        cout<< "A"<<endl;
    }
    else if(marks>=60)
    {
        cout<< "A-"<<endl;
    }
    else if(marks>=50)
    {
        cout<< "B"<<endl;
    }
    else if(marks>=40)
    {
        cout<< "C"<<endl;
    }
    else if(marks>=33)
    {
        cout<< "D"<<endl;
    }
    else
        cout<< "Fail!! Good luck for next time"<<endl;



    getch();
}
