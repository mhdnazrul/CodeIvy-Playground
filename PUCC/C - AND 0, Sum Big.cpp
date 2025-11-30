#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

ll binpow(ll a, ll b, ll m)
{
 ll res = 1;
 a %= m;
 while (b > 0)
 {
  if (b & 1)
   res = res * a % m;
  a = a * a % m;
  b >>= 1;
 }
 return res;
}

void solve()
{
 int t;
 cin >> t;
 while (t--)
 {
  ll n, k;
  cin >> n >> k;
  ll base = binpow(2, k, mod) - 1;
  if (base < 0)
   base += mod;
  ll ans = binpow(base, n, mod);
  cout << ans << endl;
 }
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}