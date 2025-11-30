#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve()
{
  int n;
  cin >> n;
  string str;
  cin >> str;

  set<char> st(str.begin(), str.end());
  string r(st.begin(), st.end());
  string r_rev = r;
  reverse(r_rev.begin(), r_rev.end());

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < r.size(); j++)
    {
      if (str[i] == r[j])
      {
        str[i] = r_rev[j];
        break;
      }
    }
  }

  cout << str << '\n';
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
