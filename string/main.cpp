#include <iostream>

using namespace std;

int main()
{
    char message[6]= {'H', 'e','l','l','o' };
    cout<< message<<endl;

    char message1[]= {'H','e','l','l','o','\0'  };
    cout<< message1<<endl;

    char message2[30];
    cout<< "Enter your name: ";
    gets(message2);

    cout<<"Welcome!!"<< message2<<endl;


    return 0;
}
