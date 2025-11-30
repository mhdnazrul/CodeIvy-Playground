#include <iostream>
#include <vector>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> A(n);

  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  bool ODD_Flag = true, EVEN_Flag = true;
  for (int i = 0; i < n; i += 2)
  {
    if (A[i] % 2 != A[0] % 2)
    {
      ODD_Flag = false;
    }
  }

  for (int i = 1; i < n; i += 2)
  {
    if (A[i] % 2 != A[1] % 2)
    {
      EVEN_Flag = false;
    }
  }

  if (ODD_Flag && EVEN_Flag)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
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
