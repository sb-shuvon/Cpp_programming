//control statement - conditional control statement- loop control statement
//conditional control statement- if-else , switch

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
   int num1,num2;

   cout<< "Enter first number : ";
   cin>> num1;

   cout<< "Enter second number:  ";
   cin>> num2;

   if(num1> num2)
   {
       cout<<"Large number is : "<<num1<<endl;
   }
   else if (num1<num2)
   {
       cout<< "Large number is "<<num2<<endl;
   }
   else
        cout<< "Numbers are Zero ";


    getch();
}



