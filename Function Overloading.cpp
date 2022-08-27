#include<iostream>
#include<conio.h>
using namespace std;

class Overload
{
public:
    void add(int a , int b)
    {
        cout<< a+b  <<endl;
    }

    void add(int a , int b, int c)
    {
        cout<< a+b+c<<endl;
    }

    void add()
    {
        cout<<"Noting to add"<<endl;
    }


};

int main()
{
    Overload ob;

    ob.add(5,6);
    ob.add(5,6,6);
    ob.add();


    getch();
}
