#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void display1()
    {
        cout<< "Name: "<<name<<endl;
        cout<< "Age: "<<age<<endl;
    }
};

class Student : public Person
{
public:
    int id;

    void display2()
    {
        cout<< "ID: "<<id<<endl;
        display1();
    }
};

int main()
{
    Student s1;
    s1.id= 925;
    s1.name= "Nilima Tasnim";
    s1.age= 18;

    s1.display2();


    getch();
}
