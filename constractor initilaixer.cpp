#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
public:
    const int admitssionFee;
    const int examFee;
    int id;

    Student(int x, int y,int z)
    : admitssionFee(x),examFee(y)
    {
        cout<< "Admission Fee: "<<admitssionFee<<endl;
        cout<< "Admission Fee: "<<examFee<<endl;
        id=z;
        cout<< "ID: "<<id<<endl;
    }
};

int main()
{
    Student s1(15000,500,373);



    getch();
}
