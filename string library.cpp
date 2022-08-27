#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
    //strlen
    char name[]= "Nilima Tasnim";
    int len= strlen(name);

    cout<< "Lenght of string: "<<len<<endl<<endl;

    //strcpy
    char name1[30]= "Tasnim Bappy";
    char name2[10];
    strcpy(name2, name1);

    cout<< "Name 2: "<<name2<<endl<<endl;

    //strcat
    char name3[]= "Nilima";
    char name4[]= " Tasnim";
    strcat(name3, name4);

    cout<< "Name 1: "<< name3<<endl<<endl;

    //strupr
    char name5[]= "Nilima Tasnim";
    strupr(name5);

    cout<< "Name 5: "<<name5<<endl<<endl;

    //strlwr
    char name6[]= "Nilima TAsnim";
    strlwr(name6);

    cout<< "Name 6: "<<name6<<endl<<endl;

    //strcmp
    char name7[]= "Nilima";
    char name8[]= "nilima";

    int value= strcmp(name7, name8);

    if(value==0)
        cout<< "String are equal";
    else
        cout<< "Sring are not equal";

    getch();
}
