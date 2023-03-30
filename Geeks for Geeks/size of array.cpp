#include<iostream>
using namespace std;

#define my_sizeof(type) ((char *) - (char*)(&type))

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = my_sizeof(arr);

    cout<< "Number of element in arr [] is " <<size;


    return 0;
}
