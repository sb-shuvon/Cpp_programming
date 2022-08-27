#include<iostream>
#include<conio.h>
using namespace std;

class mobileUser
{
public:
    void call()
    {
        cout<< "Hello"<<endl;
    }

    virtual void sendMessage()=0;
};

class Rahim
{
public:
    void sendMessage()
    {
        cout<< "Hi!! Thhis is Rahim";
    }
};

class Karim
{
public:
    void sendMessage()
    {
        cout<< "Hi!! This is KArim"<<endl;
    }


};

int main()
{
    mobileUser *m;

    Rahim r;
    Karim k;

    m = &r;
    m -> sendMessage();

    m = &k;
    m ->sendMassage();






    getch();
}
