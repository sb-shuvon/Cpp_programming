
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

    if(person1.age==person2.age && person1.salary==person2.salary)
        cout<< "person 1== person 2";
    else
        cout<< "person1 not equal to person2";




    getch();
}
