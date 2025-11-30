#include <iostream>

using namespace std;
using ll = long long;

void solve()
{
  int a1, a2, a3, b1, b2, b3, bob = 0, alice = 0;
  cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
  if (a1 > b1)
    alice += 1;
  else if (a1 < b1)
    bob += 1;

  if (a2 > b2)
    alice += 1;
  else if (a2 < b2)
    bob += 1;

  if (a3 > b3)
    alice += 1;
  else if (a3 < b3)
    bob += 1;

  cout << alice << " " << bob << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();

  return 0;
}