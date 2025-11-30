#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
  int n;
  cin >> n;
  vector<int> A(n);
  if (n > 0)
  {
    for (int i = 0; i < n; i++)
    {
      cin >> A[i];
    }
    for (int j = 0; j < n - 1; j++)
    {
      cout << (ll)A[j] * A[j + 1] << " ";
    }
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}