#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int numRow, numCols,i,j;
    int A[10][10], B[10][10], C[10][10];

    cout<< "Enter the number of rows & column : ";
    cin>> numRow>> numCols;

    //input A matrix
    cout<< "\nEnter of elements for A matrix."<<endl;

    for(i=0; i<numRow; i++)
    {
        for(j=0; j<numCols; j++)
        {
            cout<< "A["<<i << "]["<<j << "]= ";
            cin>> A[i][j];
        }
        cout<< endl;
    }

    // input B matrix
    cout<< "\nEnter elements for B matrix."<<endl<<endl;

    for(i=0; i<numRow; i++)
    {
        for(j=0; j<numCols; j++)
        {
            cout<< "B["<<i<< "]["<< j << "]= ";
            cin>> B[i][j];
        }
        cout<< endl;
    }

    //Printing A matrix
    cout<< "A= ";
    for(i=0; i<numRow; i++)
    {
        cout<< "\t";
        for(j=0; j<numCols; j++)
        {
            cout<< A[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<< endl;

    //printing B matrix
    cout<< "B= ";
    for(i=0; i<numRow; i++)
    {
        cout<< "\t";
        for(j=0; j<numCols; j++)
        {
            cout<< B[i][j]<< " ";
        }
        cout<< endl;
    }

    cout<< endl;

    // Addition the matrix
     for(i=0; i<numRow; i++)
     {
         for(j=0; j<numCols; j++)
         {
             C[i][j]= A[i][j] + B[i][j];
         }
     }

     // Printing C matrix
     cout<< "A + B = ";
     for(i=0; i<numRow; i++)
     {
         for(j=0; j<numCols; j++)
         {
             cout<< C[i][j]<< " ";
         }
         cout<< endl;
         cout<< "\t";
     }




    getch();
}
