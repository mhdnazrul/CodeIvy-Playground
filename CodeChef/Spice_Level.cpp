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
  int n;
  cin >> n;
  if (n < 4)
    cout << "MILD" << endl;
  else if (n < 7)
    cout << "MEDIUM" << endl;
  else
    cout << "HOT" << endl;
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