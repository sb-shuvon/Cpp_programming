#include<iostream>
using namespace std;

int SUM(int a, int b)
{
    int s1 = a + b;
    return s1;
}

void Print(int s2)
{
    cout<< "The sum is "<< s2;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    int sum_of = SUM(num1, num2);

    Print(sum_of);


    return 0;
}
