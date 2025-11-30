#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

void solve()
{
  int n;
  bool Flag = true;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  for (int j = 0; j < n - 1; j++)
  {
    if (A[j + 1] < A[j] || A[j + 1] == A[j])
    {
      Flag = false;
      break;
    }
  }
  if (!Flag)
  {
    cout << "No" << '\n';
  }
  else
  {
    cout << "YES" << '\n';
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();

  return 0;
}