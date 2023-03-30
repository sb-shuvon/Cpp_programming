#include<iostream>
#include <string>
#include<array>
using namespace std;

int main()
{
    array<string, 4> PL { "C", "Java", "Python", "C#" };

    for(int i=0; i<4; i++)
    {
        cout<< PL[i]<<endl;
    }


    return 0;
}
