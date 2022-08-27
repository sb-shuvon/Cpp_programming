// 1.2 + 2.3 + 3.4 + ..... n1.n2=

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
   int n1, n2, sum=0, i=1, j=2;

   cout<< "Enter n1 and n2 : ";
   cin>> n1 >> n2;

   cout<< " 1.2 + 2.3 + 3.4 + ....."<< n1 <<"."<<n2<< "=";

   while(i<=n1 && j<=n2)
   {
       sum= sum+i*j;
       i= i+1;
       j= j+1;
   }
   cout<< sum;


    getch();
}
