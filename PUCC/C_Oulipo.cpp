#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

vi kmp_algorithm(const string &pat)
{
 int n = pat.size();
 vi pi(n, 0);
 for (int i = 1, j = 0; i < n; ++i)
 {
  while (j && pat[i] != pat[j])
   j = pi[j - 1];
  if (pat[i] == pat[j])
   ++j;
  pi[i] = j;
 }
 return pi;
}

void solve()
{
 string p, s;
 cin >> p >> s;
 int cnt = 0;
 vi pi = kmp_algorithm(p);
 int j = 0, ln_p = p.size(), ln_s = s.size();
 for (int i = 0; i < ln_s; ++i)
 {
  while (j && s[i] != p[j])
   j = pi[j - 1];
  if (s[i] == p[j])
   ++j;
  if (j == ln_p)
  {
   ++cnt;
   j = pi[j - 1]; 
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