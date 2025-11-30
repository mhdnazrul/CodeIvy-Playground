#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;

void solve()
{
 int n;
 cin >> n;
 vi a(n);
 for (int i = 0; i < n; ++i)
  cin >> a[i];
 map<int, int> mp;
 for (int i = 0; i < n; ++i)
 {
  int tp = abs(a[i]);
  mp[tp] = a[i];
 }

 ll sum = 0;
 for (auto it : mp)
  sum += it.second;
 cout << sum << '\n';
}

int main()
{
 FAST_IO;
 int T;
 cin >> T;
 for (int i = 1; i <= T; ++i)
 {
  cout << "Case " << i << ": ";
  solve();
 }
 return 0;
}