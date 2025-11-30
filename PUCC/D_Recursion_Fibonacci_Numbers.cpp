#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

ll solve(int n)
{
  if (n <= 1)
  {
    return n;
  }
  vll V(n + 1);
  V[0] = 0;
  V[1] = 1;
  for (int i = 2; i <= n; ++i)
  {
    V[i] = V[i - 2] + V[i - 1];
  }
  return V[n];
}

int main()
{
  FAST_IO;
  int T;
  cin >> T;
  cout << solve(T) << endl;
  return 0;
}