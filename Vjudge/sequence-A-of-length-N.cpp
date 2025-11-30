#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> A(n);
  if (n > 0)
  {
    for (int i = 0; i < n; i++)
    {
      cin >> A[i];
    }
  }

  for (int j = 0; j < n; j++)
  {
    cout << A[j] << " ";
    if (j == k - 1)
    {
      cout << x << " ";
    }
  }
  cout << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}