#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

ll ipow10(int k)
{
 ll r = 1;
 while (k--)
  r *= 10;
 return r;
}

void solve()
{
 int a, b, c;
 cin >> a >> b >> c;
 ll g = ipow10(c - 1);
 ll A = ipow10(a - c);
 ll B = ipow10(b - c);
 ll x = g * A;
 ll y = g * (B + 1);
 cout << x << " " << y << "\n";
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
