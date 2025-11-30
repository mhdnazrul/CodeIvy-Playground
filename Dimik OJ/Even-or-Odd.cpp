#include <iostream>

using namespace std;
using ll = long long;

void solve()
{
  int n;
  cin >> n;
  if (n == 0 || n % 2 == 0)
  {
    cout << "even" << '\n';
  }
  else
  {
    cout << "odd" << '\n';
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}