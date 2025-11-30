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
 bool flag = true;

 for (int i = 0; i < 3; ++i)
 {
  if (s[i] != 'c' && s[i] != 'a' && s[i] != 't')
  {
   flag = false;
   break;
  }
 }
 cout << (flag ? "Yes\n" : "No\n");
}

 int main()
 {
  FAST_IO;
  // int T; cin >> T;while(T--)
  solve();
  return 0;
 }