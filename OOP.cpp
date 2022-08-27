#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    public:
    int id;
    double gpa;

};

int main()
{
    Student Purba, Tanu;

    Purba.id =954;
    Purba.gpa = 3.83;

    cout<< "Purba Id: "<<Purba.id<<endl;
    cout<< "Purba GPA: "<<Purba.gpa<<endl;

    cout<<endl;

    Tanu.id =973;
    Tanu.gpa = 3.25;

    cout<< "Tanu Id: "<<Tanu.id<<endl;
    cout<< "Tanu GPA: "<<Tanu.gpa<<endl;


    getch();
}
