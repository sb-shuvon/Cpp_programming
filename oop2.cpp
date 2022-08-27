#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    public:
        int id;
        double gpa;

        void display()
        {
            cout<< id << "    " << gpa <<endl;
        }

        void setValue(int x, double y)
        {
            id= x;
            gpa= y;
        }



};

int main()
{
    Student Purba, Tanu;

    Purba.setValue(954, 3.83);
    Purba.display();


    cout<<endl;

    Tanu.setValue(973, 3.25);
    Tanu.display();



    getch();
}

