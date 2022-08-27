#include<iostream>
#include<conio.h>
using namespace std;

void printMin(int ary[5])
{
    int min=ary[0],i;

    for(i=0; i<5; i++)
    {
        if(min > ary[i])
        {
            min = ary[i];
        }
    }
    cout<< "Minimum element is : " <<min<<endl;
}

int main()
{
    int ary1[5] = {5,10,20,30,40};
    int ary2[5] = {3,20,70,20,30};

    printMin(ary1);
    printMin(ary2);


    getch();
}
