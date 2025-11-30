#include <iostream>
#include <string>
using namespace std;
using ll = long long;

void solve()
{
  string s;
  cin >> s;
  bool flag = true;
  for (int i = 0; i < s.size() - 1; i++)
  {
    if (s[i] == s[i + 1])
    {
      flag = false;
      break;
    }
  }
  if (!flag)
    cout << 1 << '\n';
  else
    cout << s.size() << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
