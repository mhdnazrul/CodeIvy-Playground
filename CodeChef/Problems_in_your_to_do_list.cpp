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
  int n;
  cin >> n;
  // vector<int> a(n);
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    int tp;
    cin >> tp;
    if (tp >= 1000)
      cnt++;
  }
  cout << cnt << "\n";
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