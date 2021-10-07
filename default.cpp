//default arguments
#include <iostream>
using namespace std;
int sum(int a, int b, int c = 0)
{
  return a + b + c;
}
int main()
{
  cout << sum(12, 31) << endl;
  cout << sum(12, 31, 42) << endl;
  return 0;
}