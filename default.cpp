//default arguments
/*
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
*/

#include <iostream>
using namespace std;
int max(int a, int b, int c = 0)
{
  return a > b && a > c ? a : (b > c ? b : c);
}
int main()
{
  cout << max(17, 12, 15) << endl;
  return 0;
}
