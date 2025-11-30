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
  int t;
  cin >> t;
  int nums = 2 * t;
  vi A(nums);
  for (int i = 0; i < nums; ++i)
  {
    cin >> A[i];
  }
  int count = 0;
  for (int i = 1; i <= t; ++i)
  {
    int first = -1, second = -1;
    for (int j = 0; j < nums; ++j)
    {
      if (A[j] == i)
      {
        if (first == -1)
          first = j;
        else
          second = j;
      }
    }
    if (second - first == 2)
      count++;
  }
  cout << count << endl;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}