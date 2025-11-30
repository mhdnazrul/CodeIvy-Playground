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

int main()
{
  FAST_IO;
  int t;
  cin >> t;
  vll A(t);
  for (int i = 0; i < t; ++i)
  {
    cin >> A[i];
  }
  ll sum = 0;
  ll ans = 0;
  for (int i = 0; i < t; ++i)
  {
    sum = (sum + A[i]) % mod;
    ans = (ans + (A[i] * (sum - A[i] + mod) % mod)) % mod;
  }
  cout << ans << '\n';
  return 0;
}