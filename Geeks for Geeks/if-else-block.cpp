#include<iostream>
using namespace std;

int main()
{
    int gfg = 0;
    cout<< "Before if-else bloack "<< gfg<<endl;

    if(1)
    {
        int gfg = 100;
        cout<< "if block "<<gfg<<endl;
    }
    cout<< "After if block "<<gfg<<endl;


    return 0;
}
