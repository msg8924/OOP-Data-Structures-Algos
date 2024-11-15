#include <iostream>
using namespace std;

int main() {
   int x = 10;
   int *p = &x;
   int y = *p;
   cout << *p << endl;
   cout << &p << endl;
   cout << p << endl;
   cout << y << endl;
   cout << x << endl;
   *p = 42;
   cout << *p << endl;
   cout << &p << endl;
   cout << p << endl;
   cout << y << endl;
   cout << x << endl;
   return 0;
}; 