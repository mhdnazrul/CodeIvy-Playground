#include <iostream>
#include <vector>

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
  ll n;
  cin >> n;
  string s;
  cin >> s;
  ll cnt = 0;
  for (ll i = 1; i < n; i++)
  {
    if (s[i] != s[i - 1])
    {
      cnt++;
    }
  }
  if (s[0] == '1')
    cout << cnt + 1 << endl;
  else
    cout << cnt << endl;
}

int main()
{
  FAST_IO;
  int T = 1;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}