#include<iostream>
#include<conio.h>
using namespace std;

void arrayMax(int ary[5])
{
    int i,max=ary[0];

    for(i=0; i<=5; i++)
    {
        if(max<ary[i])
        {
            max = ary[i];
        }
    }
    cout<< "Max = "<<max<< "\n";
}

int main()
{
    int ary1[5] = {2,4,6,8,4};
    int ary2[5] = {26,41,63,82,40};

    arrayMax(ary1);
    arrayMax(ary2);


    getch();
}
