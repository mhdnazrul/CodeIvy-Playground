#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  if (x == a || x == b || x == c)
  {
    cout << "YES\n";
  }
  else
    cout << "NO\n";
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}