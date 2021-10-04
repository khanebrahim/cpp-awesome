#include <iostream>
using namespace std;
int main()
{
  int b = 12;
  int *p = &b;
  cout << b << endl;
  cout << *p << endl;
  cout << &b << endl;
  cout << p << endl;
  cout << &b << endl;
  return 0;
}