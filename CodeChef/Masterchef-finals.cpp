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
  int a;
  cin >> a;
  if (a > 10)
    cout << "NO\n";
  else
    cout << "YES\n";
}

int main()
{
  FAST_IO;
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}