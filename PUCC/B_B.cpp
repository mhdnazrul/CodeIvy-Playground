// https://vjudge.net/contest/753967#problem/B
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;
void solve()
{
  int n, x, a, b;
  cin >> n;
  vector<int> v(n + 1);
  for (int i = 1; i <= n; ++i)
    cin >> v[i];
  cin >> x >> a >> b;
  
  v.erase(v.begin() + x);
  
  v.erase(v.begin() +a, v.begin() + b);
  cout << v.size() - 1 << '\n';
  for (int i = 1; i < v.size(); ++i)
    cout << v[i] << " ";
  cout << '\n';
}

int main()
{
  FAST_IO;
  // int T; cin >> T;while(T--)
  solve();
  return 0;
}