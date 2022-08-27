#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int A[10][10], transpose[10][10], i, j, row, col;

    cout<< "Enter number of rows and columns for the matrix : ";
    cin>> row>> col;

    //taking input A matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<< "A["<<i<< "]["<<j<< "]= ";
            cin>> A[i][j];
        }
        cout<< endl;
    }

    //transpose matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i]= A[i][j];
        }
        cout<< endl;
    }

    //printing A matrix
    cout<< "A Matrix.";
    for(i=0; i<row; i++)
    {
        cout<< "\t";
        for(j=0; j<col; j++)
        {
            cout<< A[i][j]<< " ";
        }
        cout<<endl;

    }

    //printing transpose matrix
    cout<< "Transpose matrix.";
    for(i=0; i<col; i++)
    {
         cout<< "\t";
        for(j=0; j<row; j++)
        {
            cout<< transpose[i][j] << " ";
        }
        cout<<endl;

    }


    getch();
}
