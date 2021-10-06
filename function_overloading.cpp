#include <iostream>
using namespace std;
void sum(int x, int y)
{
  int sum = x + y;
  cout << sum << endl;
}
void sum(int x, int y, int z)
{
  int sum = x + y + z;
  cout << sum << endl;
}
int main()
{
  sum(20, 40);
  sum(20, 40, 50);
}