// 2.5 + 3.7 + 4.9 + ..... n1.n2=

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
   int n1, n2, sum=0, i=2, j=5;

   cout<< "Enter n1 and n2 : ";
   cin>> n1 >> n2;

   cout<< " 2.5 + 3.7 + 4.9 + ....."<< n1 <<"."<<n2<< "=";

   while(i<=n1 && j<=n2)
   {
       sum= sum+i*j;
       i= i+1;
       j= j+2;
   }
   cout<< sum;


    getch();
}

