#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
 int n, x;
 cin >> n >> x;
 vi nums(n);
 for (int i = 0; i < n; ++i)
  cin >> nums[i];

 int st = 0, ed = n - 1, cnt = 0, mid = n / 2;
 sort(nums.begin(), nums.end());
 while (st <= ed)
 {
  if (nums[st] + nums[ed] <= x)
  {
   st++;
  }
  cnt++;
  ed--;
 }
 cout << cnt << endl;
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}