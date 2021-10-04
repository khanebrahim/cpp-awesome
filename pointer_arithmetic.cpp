#include <iostream>
using namespace std;
int main()
{
  int A[5]{2, 4, 9, 8, 10};
  int *p = A;
  cout << *p << endl;
  p++;
  cout << *p << endl;
  p++;
  cout << *p << endl;
  //forward
  p++;
  cout << *p << endl;
  //backward
  p--;
  cout << *p << endl;
  return 0;
}