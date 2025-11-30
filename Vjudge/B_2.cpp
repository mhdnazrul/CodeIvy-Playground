#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
      if (a % 7==0)
      {
        cout << "Alice" << endl;
      }
      else
        cout << "Charlie" << endl;
    }
    else
    {
      if (a % 9 == 0)
      {
        cout << "Bob" << endl;
      }
      else
        cout << "Charlie" << endl;
    }
  }
  return 0;
}