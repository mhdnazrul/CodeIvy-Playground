#include <iostream>
#include <vector>
#include<algorithm>
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
  vi nums(3);
  for (int i = 0; i < 3; ++i)
    cin >> nums[i];

  sort(nums.begin(), nums.end());
  cout << nums[1] << endl;
}

int main()
{
  FAST_IO;
  int T;
  cin >> T;
  for (int i = 1; i <= T; ++i)
  {
    // cout << "Case " << i << ": ";
    solve();
  }
  return 0;
}