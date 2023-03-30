#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char *names[5]=
    {
        "Nilima",
        "Tasnim",
        "Bappy",
        "sb",
        "shuvon"
    };

    //printing names
    cout<< "Names are : ";

    for(int i=0; i<5;  i++)
    {
        cout<< names[i]<<endl;
    }


    getch();
}
