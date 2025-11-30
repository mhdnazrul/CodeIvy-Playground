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
 int n;
 cin >> n;
 ll max_sum = LLONG_MIN, curr_sum = 0;
 for (int i = 0; i < n; ++i)
 {
  ll x;
  cin >> x;
  curr_sum = max(x, curr_sum + x);
  max_sum = max(max_sum, curr_sum);
 }
 cout << max_sum << endl;
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}