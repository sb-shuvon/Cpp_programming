
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

        Student(int x, double y)
        {
            id= x;
            gpa= y;
        }


};

int main()
{
    Student Purba(954, 3.83);
    Purba.display();

    cout<<endl;

    Student Tanu(973, 3.25);
    Tanu.display();



    getch();
}

