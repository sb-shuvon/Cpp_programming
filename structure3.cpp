
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
    struct Person person1 = {18,243435.43};
    struct Person person2,person3;

    person2.age= 25;
    person2.salary= 25000;

    person3= person2;


    cout<< "Person 1"<<endl;
    cout<< "Age : "<<person1.age<<endl;
    cout<< "Salary : "<<person1.salary<<endl;

    cout<< endl<<endl;


    cout<< "Person 2"<<endl;
    cout<< "Age : "<<person2.age<<endl;
    cout<< "Salary : "<<person2.salary<<endl;

    cout<< endl<<endl;

    cout<< "Person 3"<<endl;
    cout<< "Age : "<<person3.age<<endl;
    cout<< "Salary : "<<person3.salary<<endl;






    getch();
}
