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
  int k;
  cin >> n >> k;

  queue<pair<string, int>> nums;

  for (int i = 0; i < n; ++i)
  {
    string tp_name;
    int tp_time;
    cin >> tp_name >> tp_time;
    nums.push({tp_name, tp_time});
  }

  ll crnt_value = 0;

  while (!nums.empty())
  {
    pair<string, int> ans = nums.front();
    nums.pop();

    string tp = ans.first;
    int rem_time = ans.second;

    if (rem_time <= k)
    {
      crnt_value += rem_time;
      cout << tp << " " << crnt_value << "\n";
    }
    else
    {
      crnt_value += k;
      rem_time -= k;
      nums.push({tp, rem_time});
    }
  }
}

int main()
{
  FAST_IO;
  //  int T; cin >> T;while(T--)
  solve();
  return 0;
}