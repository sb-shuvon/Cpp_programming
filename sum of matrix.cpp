#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    int A[3][3], i ,j, sum=0;

    //getting the matrix for the elements
    cout<< "Enter the elements for the matrix."<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<< "A["<<i<<"]["<<j<<"]= ";
            cin>> A[i][j];
        }
        cout<< endl;
    }

    // printing the matrix
    cout<< "A matrix."<<endl;
    for(i=0; i<3; i++)
    {
        cout<< "\t";
        for(j=0; j<3; j++)
        {
            cout<< A[i][j]<< " ";
        }
        cout<< endl;
    }

    // sum of diagonal elements
    cout<< "Diagonal elements: "
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                sum= sum + A[i][j];
            }
        }
    }

    cout<< "sum of diagonal elements= "<<sum;

    getch();
}
