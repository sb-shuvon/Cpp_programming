#include<iostream>
#include<conio.h>
using namespace std;

enum day_of_week
{
    sum,mon,tue,wed,thu,fri,sat
};

int main()
{
    enum day_of_week day1, day2;

    day1= sat;
    day2= mon;

    cout<< "Day 1= "<<day1<<endl;
    cout<< "Day 2= "<<day2<<endl;


    getch();
}
