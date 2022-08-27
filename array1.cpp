#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num[10];
    int sum=0,i;
    float avg;

    cout<< "Enter 5 Values: ";
    for(i=0; i<10; i++)
    {
        cin>> num[i];
    }

    for(i=0; i<10; i++)
    {
        sum= sum +num[i];
    }
    avg= (float)sum/10;
    cout<< "Sum is: "<<sum<<endl;
    cout<< "Avarage is: " << avg;





    getch();
}
