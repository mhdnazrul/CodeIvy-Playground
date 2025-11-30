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
 ll x, y;
 cin >> x >> y;
 if (x == 0 && y == 0)
  cout << "0\n";
  

 else
 {
  ll total = x * x + y * y;
  int rt_val = sqrt(total);
  if (rt_val * rt_val == total) cout << "1\n";
  else cout << "2\n";
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