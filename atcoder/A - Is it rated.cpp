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
  int n, m;
  cin >> n >> m;
  if (m == 1)
  {
    if (n > 1600 && n < 3000)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  else if (m == 2)
  {
    if (n > 1200 && n < 2400)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  
}
int main()
{
  FAST_IO;
  solve();
  return 0;
}