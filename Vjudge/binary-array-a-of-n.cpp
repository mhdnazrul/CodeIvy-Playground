// binary-array-a-of-n.cpp
#include <iostream>
#include <vector> 

using namespace std;
using ll = long long;

void solve()
{
  int n;
  cin >> n;
  vector<int> a(n); 
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int max_len = 0;
  int current_len = 0;

  for (int i = 0; i < n; i++)
  {
    if (a[i] == 0)
    {
      current_len++;
      max_len = max(max_len, current_len);
    }
    else
    {
      current_len = 0;
    }
  }

  cout << max_len << '\n';
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