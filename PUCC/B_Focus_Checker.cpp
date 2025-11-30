#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  bool val[26] = {false};
  char last_val = s[0];
  val[last_val - 'A'] = true;

  for (int i = 1; i < n; ++i)
  {
    if (s[i] != last_val)
    {
      if (val[s[i] - 'A'])
      {
        cout << "NO\n";
        return;
      }
      val[s[i] - 'A'] = true;
      last_val = s[i];
    }
  }

  cout << "YES\n";
}

int main()
{
  FAST_IO;
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}
