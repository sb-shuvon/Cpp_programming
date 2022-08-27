//Array of structure

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
    struct Person person[4];
    int i;

    for(i=0; i<4; i++)
    {
        cout<< "Enter information for person "<<i+1<<endl;

        cout<<"Enter age: ";
        cin>> person[i].age;

        cout<<"Enter Salary: ";
        cin>> person[i].salary;

        cout<<endl;

    }

    cout<< endl<<endl;

    for(i=0;i<4; i++)
    {
        cout<< "Person "<<i+1<<":"<<endl;

        cout<< "Age: "<<person[i].age<<endl;
        cout<< "Salary: "<<person[i].salary<<endl<<endl;

    }
    cout<< endl;

    getch();
}
