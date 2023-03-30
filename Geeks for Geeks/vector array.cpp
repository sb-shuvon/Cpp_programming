#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> name {"Yahya", "Shuvon", "Pabel" };

    name.push_back("Tanu");

    for(int i = 0; i<name.size(); i++)
    {
        cout<< name[i] <<endl;
    }


    return 0;
}
