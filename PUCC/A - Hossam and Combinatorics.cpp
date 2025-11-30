#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;

void solve()
{
  int n;
  cin >> n;
  vi a(n);
  int mn = INT_MAX, mx = INT_MIN;
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
    mn = min(mn, a[i]);
    mx = max(mx, a[i]);
  }
  int cnt_mn = 0, cnt_mx = 0;
  for (int i = 0; i < n; ++i)
  {
    if (a[i] == mn)
      cnt_mn++;
    if (a[i] == mx)
      cnt_mx++;
  }
  if (mn == mx)
    cout << 1LL * n * (n - 1) << '\n';
  else
    cout << 2LL * cnt_mn * cnt_mx << '\n';
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