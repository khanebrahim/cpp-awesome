#include <iostream>
using namespace std;
int main()
{
  int A[2][3] = {2, 4, 6, 3, 7, 9};
  int B[2][3] = {9, 4, 6, 5, 7, 9};
  int c[2][3];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << c[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}