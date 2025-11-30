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
  unordered_set<int> values;
  int cnt_idx = 0;

  for (int i = 0; i < n; ++i)
  {
    int val;
    cin >> val;

    while (val > 0 && val % 2 == 0)
    {
      if (values.count(val))
      {
        break;
      }

      cnt_idx++;
      values.insert(val);

      val /= 2;
    }
  }
  cout << cnt_idx << endl;
}

int main()
{
  FAST_IO;
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}