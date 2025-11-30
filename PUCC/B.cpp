#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
  int t, flag;
  cin >> t >> flag;
  vector<int> vec(t);
  for (int i = 0; i < t; ++i)
  {
    cin >> vec[i];
  }
  int count = 0;
  for (int j = 0; j < t; ++j)
  {
    if (vec[j] <= flag)
    {
      count++;
    }
    else
    {
      count += 2;
    }
  }
  cout << count << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  //  int t;
  //  cin >> t;
  //  while (t--) {
  solve();

  //  }
  return 0;
}