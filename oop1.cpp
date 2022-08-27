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



};

int main()
{
    Student Purba, Tanu;

    Purba.id =954;
    Purba.gpa = 3.83;
    Purba.display();


    cout<<endl;

    Tanu.id =973;
    Tanu.gpa = 3.25;
    Tanu.display();



    getch();
}

