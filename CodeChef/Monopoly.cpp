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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int max_val = max(a, max(b, max(c, d)));
  ll ans = (a + b + c + d) - max_val;
  if (ans >= max_val)
  {
    cout << "NO" << endl;
  }
  else
  {
    cout << "YES" << endl;
  }
}

int main()
{
  FAST_IO;
  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}