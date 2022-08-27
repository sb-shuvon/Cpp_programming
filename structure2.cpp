
#include<iostream>
#include<conio.h>
using namespace std;

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1, person2, person3;

    cout<< "Enter information for Person 1: "<<endl;

    cout<< "Enter Age: ";
    cin>> person1.age;

    cout<< "Enter Salary: ";
    cin>> person1.salary;

    cout<< endl;
    cout<< "Person 1"<<endl;
    cout<< "Age : "<<person1.age<<endl;
    cout<< "Salary : "<<person1.salary<<endl;

    cout<< endl<<endl;

    cout<< "Enter information for Person 2: "<<endl;

    cout<< "Enter Age: ";
    cin>> person2.age;

    cout<< "Enter Salary: ";
    cin>> person2.salary;

    cout<< endl;
    cout<< "Person 2"<<endl;
    cout<< "Age : "<<person2.age<<endl;
    cout<< "Salary : "<<person2.salary<<endl;

    cout<< endl;

    cout<< "Enter information for Person 3: "<<endl;

    cout<< "Enter Age: ";
    cin>> person3.age;

    cout<< "Enter Salary: ";
    cin>> person3.salary;

    cout<< endl;
    cout<< "Person 3"<<endl;
    cout<< "Age : "<<person3.age<<endl;
    cout<< "Salary : "<<person3.salary<<endl;




    getch();
}
