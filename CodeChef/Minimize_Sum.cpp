// https://www.codechef.com/START204D/problems/CITCOL
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
 int n;
 ll m;
 cin >> n >> m;

 vi counts(m, 0);
 ll current_sum = 0;

 for (int i = 0; i < n; ++i)
 {
  int a;
  cin >> a;
  current_sum += a;
  counts[a]++;
 }

 ll min_sum = current_sum;

 for (ll k = 1; k < m; ++k)
 {
  ll val_to_wrap = (m - k) % m;
  ll num_wrapped = counts[val_to_wrap];
  current_sum = current_sum + n - num_wrapped * m;
  min_sum = min(min_sum, current_sum);
 }

 cout << min_sum << "\n";
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