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
  int n;
  cin >> n;
  vi v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];

  int m;
  cin >> m;
  v.erase(v.begin() + (m - 1));

  int st, ed;
  cin >> st >> ed;
  v.erase(v.begin() + (st - 1), v.begin() + (ed - 1));
  cout << v.size() << endl;
  for (int i = 0; i < v.size(); ++i)
  {
    cout << v[i] << (i == v.size() - 1 ? "" : " ");
  }
  cout << endl;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}