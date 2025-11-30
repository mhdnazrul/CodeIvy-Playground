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
  int ans = sqrt(n);
  cout << ans << endl;
  if (n == 2)
    cout << 2 << endl;

  else if (n == 3)
    cout << 1 << " " << 2 << endl;

  else
  {
    int target = n,sum = 0;
    for (int i = 0; i < ans - 1; ++i)
    {
      cout << i + 2 << " ";
      sum += i + 2;
    }
    cout << abs(target - sum) << endl;
  }
}

int main()
{
  FAST_IO;
  // int T; cin >> T;while(T--)
  solve();
  return 0;
}