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
  int a, b;
  cin >> a >> b;
  int min_value = min(a * 3, b * 2);
  cout << min_value << endl;
}

int main()
{
  FAST_IO;
  int Test_case;
  cin >> Test_case;
  for (int i = 1; i <= Test_case; ++i)
  {
    // cout << "Case " << i << ": ";
    solve();
  }
  return 0;
}