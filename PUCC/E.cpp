// https://vjudge.net/contest/749293#problem/E
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
  ll n;
  cin >> n;
  ll total_sum = n * (n + 1) / 2;
  ll powers = 0;
  for (ll i = 1; i <= n; i *= 2)
  {
    powers += i;
  }

  ll final_sum = total_sum - 2 * powers;
  cout << final_sum << endl;
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
