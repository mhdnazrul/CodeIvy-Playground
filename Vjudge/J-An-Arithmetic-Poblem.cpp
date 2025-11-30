#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int i = 1;
  while (i <= t)
  {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    cout << "Case " << i << ": ";
    int diff1 = b - a;
    int diff2 = c - b;
    if (diff1 == diff2)
    {
      cout << a + (n - 1) * diff1 << endl;
    }
    else
    {
      cout << "Error" << endl;
    }
    i++;
  }
  return 0;
}