// https://www.codechef.com/START207D/problems/TOURIST
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
 int n, a, b;
 cin >> n >> a >> b;
 int ans = INT_MAX;
 for (int i = 0; i < n; i++)
 {
  int x, y;
  cin >> x >> y;
  int tp = abs(a - x) + abs(b - y);
  ans = min(ans, tp);
 }
 cout << ans << endl;
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
