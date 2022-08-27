#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int test[3][3];

    test[0][0]= 7;
    test[0][1]= 3;
    test[1][1]= 2;
    test[1][2]= 9;
    test[2][0]= 6;
    test[2][2]= 4;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<< test[i][j]<< " ";
        }
        cout<< "\n";
    }


    getch();
}

