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
  vi arr(5);
  for (int i = 0; i < 5; ++i)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  ll min_value = 0;
  ll max_value = 0;
  for (int i = 0; i < 5; ++i)
  {
    if (i < 4)
      min_value += arr[i];
    if (i >= 1)
      max_value += arr[i];
  }
  cout << min_value << " " << max_value << endl;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}