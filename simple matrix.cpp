#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int A[3][4],B[3][4];
    int i, j;

    cout<< "Enter for elements A Matrix.\n";

    //input A matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            cout<< "A["<<i<<"]["<<j<<"]= ";
            cin>> A[i][j];
        }
        cout<<endl;
    }

    //printing A matrix

    cout<< "A= ";
    for(i=0; i<3; i++)
    {
        cout<< "\t";
        for(j=0; j<4; j++)
        {
            cout<< A[i][j] << " ";
        }
        cout<<endl;
    }

    cout<< endl<<endl;

    // input B matrix

    cout<< "Enter for elements B matrix: "<<endl;

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            cout<< "B["<<i<<"]["<<j<<"]= ";
            cin>> B[i][j];
        }
        cout<<endl;
    }

    //printing B Matrix

    cout<<"B= ";
    for(i=0; i<3; i++)
    {
        cout<<"\t";
        for(j=0; j<4; j++)
        {
            cout<< B[i][j]<< " ";
        }
        cout<<endl;
    }




    getch();
}
