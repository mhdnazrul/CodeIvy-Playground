#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
const ll mod = 1e9 + 7;

void solve()
{
 int N, M;
 cin >> N >> M;
 if (N > M)
  swap(N, M);

 vll res(N + 1, 1);
 for (int i = 1; i <= N; ++i)
 {
  for (int j = 1; j <= M; ++j)
  {
   int g = __gcd(i, j);
   res[g] = res[g] * g % mod;
  }
 }
 ll ans = 1;
 for (int i = 1; i <= N; ++i)
 {
  ans = ans * res[i] % mod;
 }
 cout << ans << "\n";
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}