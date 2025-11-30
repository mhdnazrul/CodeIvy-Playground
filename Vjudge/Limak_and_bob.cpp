#include <iostream>

using namespace std;
using ll = long long;

void solve()
{
  int limak, bob, count = 0;
  cin >> limak >> bob;
  for (int i = 1; i <= 10; i++)
  {
    limak *= 3;
    bob *= 2;
    if (limak > bob)
    {
      count++;
      break;
    }
    else
    {
      count++;
    }
  }
  cout << count << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();

  return 0;
}