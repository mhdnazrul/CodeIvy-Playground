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
 cout << fixed << setprecision(12);
 int n;
 cin >> n;
 double ans = 0;
 for (int i = 1; i <= n; ++i)
 {
  ans += 1.0 / i;
 }
 cout << ans << endl;
}

int main()
{
 FAST_IO;
 // int T; cin >> T; while(T--)
 solve();
 return 0;
}