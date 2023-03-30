#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string name;
    ofstream file;

    file.open("student.txt");

    cout<< "Enter your name: ";
    getline(cin,name);

    file<< "Welcome!!" << name<<endl;

    file.close();

    getch();
}
