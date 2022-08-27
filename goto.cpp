#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i=1;

    print:
        cout<< i<<endl;
        i++;

        if(i<5)
            goto print;


    getch();
}
