#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

ll Big_Mod(ll B, ll P, ll M)
{
 ll res = 1;
 B = B % M;
 while (P > 0)
 {
  if (P & 1)
   res = (res * B) % M;
  B = (B * B) % M;
  P >>= 1;
 }
 return res;
}

void solve()
{
 ll B, P, M;
 while (cin >> B >> P >> M)
 {
  cout << Big_Mod(B, P, M) << '\n';
 }
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}
