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
  int tp = abs(b - c);
  int sum = tp * d;
  if (b <= c)
  {
    cout << a - (tp * d) << endl;
    return;
  }
  cout << a + sum << endl;
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