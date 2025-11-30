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
 ll a, b;
 cin >> a >> b;
 if ((a + b) % 3 == 0 && a <= 2 * b && b <= 2 * a)
  cout << "YES\n";
 else
  cout << "NO\n";
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