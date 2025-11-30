#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long a, b, c, r, result;
    cin >> a >> b >> c;
    r = pow(a, b);
    result = pow(a, c);
    cout << r + result << endl;
  }
  return 0;
}