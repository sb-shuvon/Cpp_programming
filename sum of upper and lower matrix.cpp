#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    int A[3][3], i ,j, upperSum=0, lowerSum=0;

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

    // sum of upper and lower triangle elements
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<j)
            {
                upperSum= upperSum + A[i][j];
            }
            if(i>j)
            {
                lowerSum= lowerSum + A[i][j];
        }
    }

    cout<< endl;
    cout<< "sum of upperSum elements= "<<upperSum<<endl;
    cout<< "sum of lowerSum elements= "<<upperSum;

    getch();
}

}
