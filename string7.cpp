#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char str[100];
    int i, vowel, consonant, digit, word, other,ch;

    cout<< "Enter a string : ";
    gets(str);

    i=vowel=consonant=word=digit=other=0;

    while((ch=str[i])!='\0')
    {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            vowel++;

        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            consonant++;

        else if(ch>='0' && ch<='9')
            digit++;

        else if(ch==' ')
            word++;

        else
            other++;

        i++;

    }
    word++;

    cout<< "Number of vowel= "<<vowel<<endl;
    cout<< "Number of consonant= "<<consonant<<endl;
    cout<< "Number of digit= "<<digit<<endl;
    cout<< "Number of word= "<<word<<endl;
    cout<< "Number of other= "<<other<<endl;




    getch();
}

