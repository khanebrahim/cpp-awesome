// Pass by Address and reference
/*
#include <iostream>
using namespace std;
void swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
  cout << a << " " << b << endl;
}
int main()
{
  int x = 10, y = 20;
  swap(x, y);
}
*/

/*
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
  cout << &a << " " << &b << endl;
  int temp;
  temp = a;
  a = b;
  b = temp;
}
int main()
{
  int x = 10, y = 20;
  swap(x, y);
  cout << &x << " " << &y << endl;
  cout << x << " " << y << endl;
}
*/
// return by address

/*
#include <iostream>
using namespace std;
int *fun()
{
  int *p = new int[5];
  for (int i = 1; i <= 5; i++)
  {
    p[i] = 5 * i;
  }
  return p;
}

int main()
{
  int *q = fun();
  for (int i = 1; i <= 5; i++)
  {
    cout << q[i] << endl;
  }
  return 0;
}
*/

/*
#include <iostream>
using namespace std;
int &fun(int &x)
{
  return x;
}
int main()
{
  int b = 18;
  fun(b) = 29;
  cout << b << endl;
}
*/
//recursive function
/*
#include <iostream>
using namespace std;
void fun(int n)
{
  if (n > 0)
  {

    cout << n << endl;
    fun(n - 1);
  }
}
int main()
{
  int x = 5;
  fun(x);
}
*/

//Program for Linear Search using Functions
#include <iostream>
using namespace std;
int Search(int A[], int n, int Linear)
{
  for (int i = 0; i < n; i++)
    if (Linear == A[i])
      return i;
  return 0;
}
int main()
{
  int A[] = {2, 4, 5, 7, 10, 9, 13, 90, 45, 89};
  int L;
  cout << "Enter an Element to be Searched:";
  cin >> L;
  int index = Search(A, 10, L);

  cout << "Element found at index :" << index << endl;
}
