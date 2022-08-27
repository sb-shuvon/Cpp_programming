#include<iostream>
#include<conio.h>
using namespace std;

void arrayFunction(int ary[5])
{
    int i;

    for(i=0; i<5; i++)
    {
        cout<< ary[i] <<"\n";
    }
}

int main()
{
    int ary1[5] = {10,20,30,40,50};
    int ary2[5] = {70,20,80,50,40};

    arrayFunction(ary1);
    arrayFunction(ary2);
}
