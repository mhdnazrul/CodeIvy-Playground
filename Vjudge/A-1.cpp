#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;
    if (x > y)
    {
      cout << y << endl;
    }
    else
    {
      int r = x + ((y - x) * 2);
      cout << r << endl;
    }
  }
  return 0;
}