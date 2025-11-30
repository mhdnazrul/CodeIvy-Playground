#include <iostream>
#include <vector>
#include <string>
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
  string s;
  cin >> s;
  for (char c = 'a'; c <= 'z'; c++)
  {
    if (s.find(c) == string::npos)
    {
      cout << c << endl;
      return;
    }
  }
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}