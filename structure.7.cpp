#include<iostream>
#include<conio.h>
using namespace std;

struct Person
{
    char name[30];
    int age;
    float salary;
};

void display(struct Person p)
{
    cout<< "Name: "<<p.name<<endl;
    cout<< "Age: "<<p.age<<endl;
    cout<< "Salary: "<<p.salary<<endl;
}

int main()
{
    struct Person person1;

    person1.name= "Nilima Tasnim";
    person1.age= 18;
    person1.salary= 123003.32;

    display(person1);


    getch();
}
