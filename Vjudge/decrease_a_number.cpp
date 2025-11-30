#include <iostream>

using namespace std;
using ll = long long;

void solve()
{
  int number, k;
  cin >> number >> k;
  while (k--)
  {
    int mod = number % 10;
    if (mod == 0)
    {
      number /= 10;
    }
    else
    {
      number--;
    }
  }
  cout << number << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();

  return 0;
}