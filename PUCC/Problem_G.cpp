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

int solve(int n, int x, vector<int> &nums)
{
  sort(nums.rbegin(), nums.rend());
  int count = 0, teamSize = 0;
  for (int i = 0; i < n; ++i)
  {
    teamSize++;
    if (teamSize * nums[i] >= x)
    {
      count++;
      teamSize = 0;
    }
  }
  return count;
}
int main()
{
  FAST_IO;
  int t;
  cin >> t;
  while (t--)
  {
    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> nums[i];
    }
    cout << solve(n, x, nums) << endl;
  }
  return 0;
}