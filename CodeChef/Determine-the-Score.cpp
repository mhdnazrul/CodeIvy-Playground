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
  int x, n;
  cin >> x >> n;
  int division = x / 10;
  cout << division * n << endl;
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