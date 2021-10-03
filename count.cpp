#include <iostream>
using namespace std;
int count = 1;
int main()
{
  for (int i = 0; i <= 5; i++)
  {
    for (int j = 0; j <= 5; j++)
    {
      cout << count << " ";
    }
    cout << endl;
  }
  return 0;
}