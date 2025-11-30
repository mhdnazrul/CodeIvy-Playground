#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
 ll x;
 cin >> x;
 ll cnt = 0;
 ll sum = 0;

 while (sum < x)
 {
  cnt++;
  sum += cnt;
 }

 if (sum - x == 1)
  cout << cnt + 1 << endl;
 else
  cout << cnt << endl;
}
int main()
{
 FAST_IO;
 int T;
 cin >> T;
 while (T--)
  solve();
 return 0;
}