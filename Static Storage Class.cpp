#include<iostream>
#include<conio.h>
using namespace std;

void display()
{
    static int i= 0;
    int j= 0;

    i++;
    j++;

    cout<< "i= "<< i << " " << "j= "<<j << "\n";


}

int main()
{
    display();
    display();
    display();
    display();
    display();


    getch();

}
