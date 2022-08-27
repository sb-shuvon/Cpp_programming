#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    try
    {
        int num1, num2;
        double result;

        cout<< "Enter 1st number: ";
        cin>> num1;

        if(num2==0)
        {
            throw -1;
        }

        cout<< "Enter 2nd number: ";
        cin>>num2;

        if(num2==0)
        {
            throw -1;
        }

        result = (double) num1 / num2;
        cout<< "Result = "<<result<<endl;
    }

    catch(int x)
    {
        cout<< "Divide by zero is not possible."<<endl;
        cout<< "Please try again."<<endl;
    }


    getch();
}
