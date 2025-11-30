// https://www.codechef.com/START207D/problems/MAKESUB
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
 int n, cnt = 0, ones = -1, zeros = -1;
 string s;
 cin >> n >> s;

 for (int i = 0; i < n; ++i)
 {
  if (s[i] == '1')
  {
   if (ones == -1)
    ones = i;
   zeros = i;
  }
 }

 if (ones != -1)
 {
  for (int i = ones; i <= zeros; ++i)
  {
   if (s[i] == '0')
    ++cnt;
  }
 }

 cout << cnt << '\n';
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