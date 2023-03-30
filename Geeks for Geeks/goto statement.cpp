#include<iostream>
using namespace std;

void printNumber()
{
    int n = 1;
lavel:
    cout<< " "<<n;
    n++;

    if(n <= 10)
        goto lavel;
}

int main()
{
    printNumber();

    return 0;
}
