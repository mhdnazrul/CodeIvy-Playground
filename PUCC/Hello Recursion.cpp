#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

ll solve()
{
  int n;
  cin >> n;
  vi V(n);
  ll sum = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> V[i];
    sum += V[i];
  }
  return sum;
}

int main()
{
  FAST_IO;
  int T;
  cin >> T;
  for (int i = 1; i <= T; ++i)
    cout << "Case " << i << ": " << solve() << endl;
  return 0;
}