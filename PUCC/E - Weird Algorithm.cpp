#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;
void solve(ll n)
{
  cout << n << " ";
  while (n > 1)
  {
    if (n % 2 == 0)
    {
      n /= 2;
    }
    else
    {
      n = (n * 3) + 1;
    }
    cout << n << " ";
  }
  cout << endl;
}
int main()
{
  FAST_IO;
  ll n;
  cin >> n;
  solve(n);
  return 0;
}