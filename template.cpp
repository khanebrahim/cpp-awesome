#include <iostream>
using namespace std;
template <class T>
T maxim(T a, T b)
{
  return a > b ? a : b;
}
int main()
{
  cout << maxim(12, 14) << endl;
  cout << maxim(13.8, 12.5) << endl;
  return 0;
}
