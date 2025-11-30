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
  int n1, n2, k;
  cin >> n1 >> n2 >> k;
  cout << (n1 * n2 <= k ? "YES" : "NO") << endl;
}

int main()
{
  FAST_IO;
  int T;
  cin >> T;
  for (int i = 1; i <= T; ++i)
  {
    // cout << "Case " << i << ": ";
    solve();
  }
  return 0;
}