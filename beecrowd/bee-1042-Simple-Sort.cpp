// bee-1042-Simple-Sort.cpp
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

void solve()
{
  vi nums(3);
  for (int i = 0; i < 3; ++i)
  {
    cin >> nums[i];
  }
  vi temp = nums;
  sort(temp.begin(), temp.end());
  for (int i = 0; i < 3; ++i)
  {
    cout << temp[i] << '\n';
  }
  cout << endl;
  for (int i = 0; i<3; ++i)
  {
    cout << nums[i] << '\n';
  }
}

int main()
{
  FAST_IO;

  solve();
  return 0;
}
