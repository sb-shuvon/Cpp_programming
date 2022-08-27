#include<iostream>
#include<conio.h>
using namespace std;

int maximum(int n[])
{
    int i;
    int max=n[0];
    for(i=1; i<5; i++)
    {
        if(max<n[i])
            max= n[i];
    }
    return max;
}

int main()
{
    int num[]= {10,20,30,40,50};

    int maxValue= maximum(num);

    cout<< "Maximum Value: "<<maxValue;



    getch();
}

