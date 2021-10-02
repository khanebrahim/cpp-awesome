#include <iostream>
using namespace std;
int main()
{
  int A[10] = {4, 85, 9, 8, 12, 34, 23, 45, 6, 2};
  int max = INT_MIN;
  for (auto x : A)
  {
    if (x > max)
    {
      max = x;
    }
    cout << "maximum number is: " << max << endl;
  }
  return 0;
}