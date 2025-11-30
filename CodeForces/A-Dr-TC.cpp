// https://codeforces.com/problemset/problem/2106/A
// nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
void solve()
{
  int n, cnt_one = 0;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      char bit = s[j];
      if (j == i)
        bit = (bit == '0') ? '1' : '0';
      if (bit == '1')
        ++cnt_one;
    }
  }
  cout << cnt_one << endl;
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