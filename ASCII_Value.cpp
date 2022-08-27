#include <iostream>
using namespace std;
void ASCII(char c) {
   int i = c;
   cout<<"The ASCII value of "<<c<<" is "<<i<<endl;
}
int main() {
   ASCII('A');
   ASCII('a');
   ASCII('Z');
   ASCII('z');
   ASCII('$');
   ASCII('&');
   ASCII('?');
   return 0;
}
