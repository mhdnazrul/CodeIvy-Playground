#include <iostream>
#include <vector>

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
  int n;
  cin >> n;
  if (n < 3)
    cout << "GOLD\n";
  else if (n < 6)
    cout << "SILVER\n";
  else
    cout << "BRONZE\n";
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}