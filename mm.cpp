#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int row1, row2, col1, col2, i, j, k;
    int first[10][10], second[10][10], result[10][10];

    cout<< "Enter row & column for first matrix : ";
    cin>> row1>> col1;

    cout<< "Enter row & column for second matrix : ";
    cin>> row2, col2;

    while(col1!=row2)
    {
        cout<< "\n\nError!!!"<<endl<<endl;
        cout<<"Column of first matrix not equal to second row"<<endl<<endl;

        cout<< "Enter row & column for first matrix : ";
        cin>> row1>> col1;

        cout<< "Enter row & column for second matrix : ";
        cin>> row2, col2;
    }

    // taking input for first matrix

    cout<< "\nEnter elements for First Matrix: "<<endl<<endl;
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            cout<< "First ["<<i<<"]["<<j<<"]= ";
            cin>> first[i][j];
        }
        cout<<endl;
    }

    // taking input for second matrix

    cout<< "Enter elements for Second Matrix: "<<endl;
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            cout<< "Second ["<<i<< "]["<<j<<"]= ";
            cin>> second[i][j];
        }
        cout<< endl;
    }

    // printing first matrix

    cout<< "First: "<<endl;
    for(i=0; i<row1; i++)
    {
        cout<< "\t";
        for(j=0; j<col2; j++)
        {
            cout<< first[i][j]<< " ";
        }
        cout<< endl;
    }

    //printing second matrix

    cout<< "Second: ";
    for(i=0; i<row2; i++)
    {
        cout<< "\t";
        for(j=0; j<col2; j++)
        {
            cout<< second[i][j] << " ";
        }
        cout<< endl;
    }



    getch();
}

