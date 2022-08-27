#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int first[10][10], second[10][10], result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    cout<< "Enter rows & column for first matrix : ";
    cin>> r1>> c1;

    cout<< "Enter rows & column for second matrix : ";
    cin>> r2 >> c2;

    while(c1!=r2)
    {
        cout<< "Error!!! "<<endl;
        cout<< "Column of first matrix not equal to row of second matrix."<<endl<<endl;

        cout<< "Enter rows & column for first matrix : ";
        cin>> r1>> c1;

        cout<< "Enter rows & column for second matrix : ";
        cin>> r2 >> c2;
    }

    cout<< endl << "Enter elements for first matrix: "<<endl<<endl;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cout<< "First ["<<i<<"]["<<j<<"]= ";
            cin>> first[i][j];
        }
        cout<< endl;
    }

    // Taking input for second matrix

    cout<< endl << "Enter elements for second matrix: "<<endl<<endl;
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<< "Second ["<<i<<"]["<<j<<"]= ";
            cin>> second[i][j];
        }
        cout<< endl;
    }

    cout<< endl;

    // multiplying matrix
    for (i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum= sum + first[i][k] + second[k][j];
            }
            result[i][j]= sum;
            sum= 0;
        }
    }


    // printing first matrix

    cout<<endl << "First Matrix: "<<endl;
    for(i=0; i<r1; i++)
    {
        cout<< "\t";
        for(j=0; j<c1; j++)
        {
            cout<< first[i][j]<< " ";
        }
        cout<< endl;
    }

    // printing second matrix

    cout<<endl << "Second Matrix: "<<endl;
    for(i=0; i<r2; i++)
    {
        cout<< "\t";
        for(j=0; j<c2; j++)
        {
            cout<< second[i][j] <<" ";
        }
        cout<< endl;
    }


    //printing result matrix
    cout<<endl << "Result Matrix: "<<endl;
    for(i=0; i<r1; i++)
    {
        cout<< "\t";
        for(j=0; j<c2; j++)
        {
            cout<< result[i][j] <<" ";
        }
        cout<< endl;
    }
    cout<< endl<<endl;

    cout<< "Congratulation!!!"<<endl;;
    cout<< "sb shuvon (N)!!! your Software has been Successfully Completed";


    getch();
}
