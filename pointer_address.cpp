#include <iostream>
using namespace std;
int main()
{
  int A[7]{2, 5, 6, 7, 9, 7, 11};
  int *p = A;
  cout << p << endl;
  cout << p + 2 << endl;
  return 0;
}