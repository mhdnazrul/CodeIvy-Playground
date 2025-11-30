#include <iostream>
#include <vector>
#include <algorithm>
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
  vi height(n);
  vi weight(n);
  int max_weight = 0, max_height = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> height[i] >> weight[i];
    max_height = max(max_height, height[i]);
    max_weight = max(max_weight, weight[i]);
  }
  ll ans = 2 * (max_height + max_weight);
  cout << ans << endl;
}

int main()
{
  FAST_IO;
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}