#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
  int t;
  cin >> t;
  ll sum = 0;
  while (t--)
  {
    ll num;
    cin >> num;
    sum += num;
  }
  cout << sum << '\n';
}