#include <iostream>

using namespace std;
using ll = long long;

void solve(string num)
{
  int sum = 0;
  int l = num.size();
  for (int i = 0; i < l; i++)
  {
    sum += num[i] - '0';
  }
  cout << sum << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    string num;
    cin >> num;
    solve(num);
  }
  return 0;
}