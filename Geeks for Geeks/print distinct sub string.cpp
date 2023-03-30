#include<iostream>
#include<map>
using namespace std;

void printSubString (string str)
{
    map<pair<char,char>, int> dPair;

    for(int i=0; i<str.size()-1; i++)
        dPair[make_pair(str[i], str[i+1])]++;

    cout<< "Distinct sub-string with counts : "<<endl;
    for(auto it= dPair.begin(); it! = dPair.end(); it++)
        cout<< it -> first.first << it ->first.second <<"_" << it ->second << " ";
}


int main()
{
    string str = "abcacdcacabacaassddssklac";
    printSubString(str);


    return 0;
}
