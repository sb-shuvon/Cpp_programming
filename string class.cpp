#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    string str1= "Nilima";
    string str2= " Tasnim";
    string str3= " Bappy";

    //strcpy
    str3= str1;
    cout<< "String 3= "<<str3<<endl;

    //string sum
    str3= str1+ str2;
    cout<< "String 1 + String2= "<<str3<<endl;

    //string size

    int len= str1.size();
    cout<< "Lenght of str1: "<<len<<endl;

    getch();
}
