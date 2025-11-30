// https://www.codechef.com/practice/course/strings/STRINGS/problems/DIFFCONSEC
// Nazrul Islam
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
 int n, cnt = 0, cnt_ones = 0, i, tp;
 string s, str, t;
 cin >> n >> s;
 for (i = 0; i < n - 1; i ++)
 {
  t = s.substr(i, 2);
  if (t == "11")
   cnt++;
  else if (t == "00")
   cnt++;
 }
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