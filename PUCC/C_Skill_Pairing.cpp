#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
  int n;
  cin >> n;
  vi a(n);
  for (int &x : a)
    cin >> x;

  sort(a.begin(), a.end());
  int sum = 0;
  for (int i = 0; i < n;)
  {
    sum += abs( a[i + 1] - a[i] );
    i+= 2;
  }

  cout << sum << '\n';
}

int main() {
  FAST_IO;
  //int T; cin >> T;while(T--)
    solve();
  return 0;
}