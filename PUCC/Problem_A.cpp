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
  vi arr(t);
  for (int i = 0; i < t; ++i)
  {
    cin >> arr[i];
  }
  vi temp = arr;
  reverse(temp.begin(), temp.end());
  for (int i = 0; i < t; ++i)
  {
    cout << temp[i] << " ";
  }
  cout << '\n';
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}