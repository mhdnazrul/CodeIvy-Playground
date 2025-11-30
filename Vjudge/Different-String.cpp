#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(string s, int n)
{
  // int n = s.size();
  for (int i = 0; i < n; i++)
  {
    if (s[i] != s[n - 1])
    {
      swap(s[i], s[n - 1]);
      cout << "YES" << '\n';
      cout << s << '\n';
      return;
    }
  }
  cout << "No" << '\n';
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int n = s.size();
    solve(s, n);
  }
  return 0;
}