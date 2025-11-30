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
  int city, road;
  cin >> city >> road;
  vi b(2 * road), a(city);
  for (int i = 0; i < 2 * road; ++i)
    cin >> b[i];

  sort(b.begin(), b.end());
  for (int i = 0; i < city; ++i)
  {
    int c = 0;
    for (int j = 0; j < b.size(); j++)
    {
      if (b[j] == i + 1)
        c++;
      else
        continue;
    }
    cout << c << '\n';
  }
}
int main()
{
  FAST_IO;
  solve();
  return 0;
}