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
  vll a(n);
  ll sum = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
    sum += a[i];
  }

  if (sum % n == 0)
  {
    int cnt = 0;
    int flag = sum / n;
    for (int j = 0; j < n; j++)
    {
      if (a[j] > flag)
        cnt++;
      else
        continue;
    }
    cout << cnt << "\n";
    return;
  }
  cout << "-1\n";
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