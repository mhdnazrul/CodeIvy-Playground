#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

int main()
{
  FAST_IO;
  ll a, b;
  cin >> a >> b;
  ll ans = (a * 5000) + (b * 9800);
  cout << ans << endl;
  return 0;
}