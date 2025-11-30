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
 int ans = 0;
 for (int i = 0; i < n; ++i)
 {
  cin >> nums[i];
  if (nums[i] < x)
   ans++;
 }
 int st = 0, ed = n - 1, cnt = 0;
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
 if (ans <= 0 && cnt <= 0)
 {
  cout << "IMPOSSIBLE" << endl;
  return;
 }
 cout << cnt << " " << ans << endl;
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}