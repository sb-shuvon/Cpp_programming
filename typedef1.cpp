
#include<iostream>
#include<conio.h>
using namespace std;

struct Book
{
    char book_name[20];
    int price;
};

int main()
{
   typedef struct Book book;

   book b= {"Nilimar shohor",350};

   cout<< "Book Name: "<<b.book_name<<endl;
   cout<< "Book Price: "<<b.price<<endl;


    getch();
}

