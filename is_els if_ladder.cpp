// Students marks

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    while(1)
    {
        float marks;

        cout<< "Enter students marks : ";
        cin>> marks;

        if(marks<0 || marks>100)
            cout<< "Invalid Mark "<<endl;
        else if(marks>=80 && marks<=100)
        {
            cout<< "A+ Gread"<<endl;
            cout<<"Congratulation!!!"<<endl;
        }
        else if(marks>=70 && marks<=79)
            cout<< "A Gread"<<endl;
        else if(marks>=60 && marks<=69)
            cout<< "A- Gread"<<endl;
        else if(marks>=50 && marks<=59)
            cout<< "B Gread"<<endl;
        else if(marks>=40 && marks<=49)
            cout<< "C Gread"<<endl;
        else if(marks>=33 && marks<=39)
            cout<< "D Gread"<<endl;
        else
        {
            cout<< "Fail"<<endl;
            cout<<"Best of luck for next time!!!"<<endl;
        }

    }

    getch();
}
