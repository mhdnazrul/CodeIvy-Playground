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
 string s;
 cin >> s;
 int x, y;
 if (s == "()")
 {
  x = 1;
  y = 0;
 }
 else
 {
  x = 1;

  int bct = 0;
  for (char c : s)
  {
   if (c == ')')
    bct++;
  }

  if (bct > 0)
   y = 1;
  else
   y = 0;
 }

 cout << x << " " << y << '\n';
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