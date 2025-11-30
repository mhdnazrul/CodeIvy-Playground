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
 int n;
 cin >> n;
 vi nums(n);
 for (int i = 0; i < n; ++i)
 {
  cin >> nums[i];
 }
 sort(nums.begin(), nums.end());
 int cnt = 1;
 for (int i = 1; i < n; ++i)
 {
  if (nums[i] != nums[i - 1])
  {
   cnt++;
  }
 }
 cout << cnt << endl;
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}