#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int ary[3][4]=
    {
        {3,5,2,4},
        {2,0,5,1},
        {7,3,2,4}
    };

    int i,j;

    for(i=0; i<4; ++i)
    {
        for(j=0; j<4; ++j)
        {
            cout<< ary[i][j] << " ";
        }
        cout<< "\n";
    }


    getch();
}
