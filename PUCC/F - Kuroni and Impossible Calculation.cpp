#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
 int n, m;
 cin >> n >> m;
 vi a(n);
 for (int i = 0; i < n; ++i)
  cin >> a[i];
 if (n > m)
 {
  cout << 0 << endl;
  return;
 }
 ll ans = 1;
 for (int i = 0; i < n; ++i)
 {
  for (int j = i + 1; j < n; ++j)
  {
   ans = ans * abs(a[i] - a[j]) % m;
  }
 }
 cout << ans << endl;
}

int main() {
  FAST_IO;
  //int T; cin >> T;while(T--)
    solve();
  return 0;
}