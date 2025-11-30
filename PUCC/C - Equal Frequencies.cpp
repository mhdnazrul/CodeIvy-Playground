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

 int dd = n;
 string tm;
 for (int k = 1; k <= min(26, n); ++k)
 {
  if (n % k != 0)
   continue;
  int fq_val = n / k;

  vi cnt(26, 0);
  for (char c : s)
   cnt[c - 'a']++;
  vector<pair<int, int>> Vec_pair;
  for (int i = 0; i < 26; ++i)
   Vec_pair.push_back({cnt[i], i});
  sort(Vec_pair.rbegin(), Vec_pair.rend());

  vi ans(26, 0);
  for (int i = 0; i < k; ++i)
  {
   ans[Vec_pair[i].second] = fq_val;
  }
  string t = s;
  vi w(26, 0);
  vector<int> X;
  for (int i = 0; i < 26; ++i)
  {
   if (w[i] < ans[i])
   {
    for (int j = 0; j < ans[i] - min(cnt[i], ans[i]); ++j)
     X.push_back(i);
   }
  }

  int ptr = 0;
  for (int i = 0; i < n; ++i)
  {
   int idx = t[i] - 'a';
   if (w[idx] < ans[idx])
   {
    w[idx]++;
   }
   else
   {
    t[i] = 'a' + X[ptr++];
   }
  }

  int diff = 0;
  for (int i = 0; i < n; ++i)
  {
   if (t[i] != s[i])
    diff++;
  }

  if (diff < dd)
  {
   dd = diff;
   tm = t;
  }
 }
 cout << dd << '\n'
      << tm << '\n';
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