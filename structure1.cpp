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
    struct Person person1, person2;

    person1.age= 19;
    person1.salary= 34245;

    cout<< "Person1: "<<endl;
    cout<< "Age= "<<person1.age<<endl;
    cout<< "Salary= "<<person1.salary<<endl<<endl;


    person2.age= 18;
    person2.salary= 234535;

    cout<< "Person2: "<<endl;
    cout<< "Age= "<<person2.age<<endl;
    cout<< "Salary= "<<person2.salary<<endl;


    getch();
}
