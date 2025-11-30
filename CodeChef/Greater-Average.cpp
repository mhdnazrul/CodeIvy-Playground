#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int sum = 0;
  int a, b, c;
  cin >> a >> b >> c;
  sum = a + b;
  float avg = (float)sum / 2;
  if (avg > c)
    cout << "YES\n";
  else
    cout << "NO\n";
}
int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}