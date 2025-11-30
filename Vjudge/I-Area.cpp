#include <bits/stdc++.h>
using namespace std;

int main()
{
  short t, i = 1;
  cin >> t;

  while (i <= t)
  {
    long long b, h;
    cin >> b >> h;
    cout << "Case " << i << ": " << b * h << endl;
    i++;
  }
  return 0;
}