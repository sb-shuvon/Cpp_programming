#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int A[3][4];
    int i, j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            cout<< "A["<<i<<"]["<<j<<"]= ";
            cin>> A[i][j];
        }
        cout<<endl;
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            cout<< A[i][j];
        }
        cout<<endl;
    }



    getch();
}
