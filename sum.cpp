#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2,sum;
    float avg;
    cout<< "Enter 2 number : ";
    cin>> num1>> num2;

    sum= num1 + num2;
    cout<< "Sum = "<< sum<<endl;;

    avg = (float)sum/2;
    cout<< "Avarage : "<< avg;

    getch();
}
