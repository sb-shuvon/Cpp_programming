#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int mark;

    cout<< "Enter your mark : ";
    cin>> mark;

    if(mark>=33)
    {
        cout<< "Passed!!"<<endl;
        cout<< "Congratulations!!"<<endl;
    }
    else
    {
        cout<< "Failed!!"<<endl;
        cout<< "Best of luck for next time!!"<<endl;
    }


    getch();
}
