#include <iostream>
#include <vector>

using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
  int a;
  cin >> a;
  if (400 % a == 0)
  {
    int result = 400 / a;
    cout << result << '\n';
  }
  else
    cout << -1 << '\n';
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}