#include<iostream>
#include<conio.h>
using namespace  std;

int main()
{

int fact;
   int result= fact(5);

   cout<< "Factorial of 5= "<<result<<endl;


    getch();
}

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
