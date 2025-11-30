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
  int tv1, tv2, discount1, discount2;
  cin >> tv1 >> tv2 >> discount1 >> discount2;
  ll forTV1 = tv1 - discount1, forTV2 = tv2 - discount2;
  if (forTV1 == forTV2)
    cout << "Any" << endl;
  else if (forTV1 < forTV2)
    cout << "First" << endl;
  else
    cout << "Second" << endl;
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