// https://vjudge.net/contest/750888#problem/A
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
 string s;
 cin >> s;
 int cnt_rainy = 0, MAX_rainy = 0;
 for (char c : s)
 {
  if (c == 'R')
   cnt_rainy++;
  else
  {
   MAX_rainy = max(MAX_rainy, cnt_rainy);
   cnt_rainy = 0;
  }
 }
 MAX_rainy = max(MAX_rainy, cnt_rainy);
 cout << MAX_rainy << endl;
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}