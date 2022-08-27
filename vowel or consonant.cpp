#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char lettar;

    cout<< "Enter any letter : ";
    cin>> lettar;

    if(lettar== 'a' || lettar== 'e' || lettar== 'i' || lettar== 'o' || lettar== 'u' ||
        lettar== 'A' || lettar== 'E' || lettar== 'I' || lettar== 'O' || lettar== 'U')
        {
            cout<< "Vowel";
        }
    else
        cout<< "Consonant";


    getch();
}

