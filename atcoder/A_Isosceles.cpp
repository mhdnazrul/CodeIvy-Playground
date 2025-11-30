// https://atcoder.jp/contests/abc424/tasks/abc424_a
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
 int a, b, c;
 cin >> a >> b >> c;
 if (a == c || a == b || b == c)
  cout << "Yes\n";
 else
  cout << "No\n";
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}