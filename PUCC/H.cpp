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
  deque<int> nums;
  for (int i = 0; i < n; ++i)
  {
    int val;
    cin >> val;
    nums.push_back(val);
  }

  ll A_sum = 0;
  ll B_sum = 0;
  bool flag = true;

  while (!nums.empty())
  {
    int tp;
    if (nums.front() > nums.back() || nums.size() == 1)
    {
      tp = nums.front();
      nums.pop_front();
    }
    else
    {
      tp = nums.back();
      nums.pop_back();
    }

    if (flag)
    {
      A_sum += tp;
    }
    else
    {
      B_sum += tp;
    }
    flag = !flag;
  }
  cout << A_sum << " " << B_sum << "\n";
}

int main()
{
  FAST_IO;
  //  int T; cin >> T;while(T--)
  solve();
  return 0;
}