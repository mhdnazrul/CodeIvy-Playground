#include <iostream>
using namespace std;

void solve()
{
  long long a, b;
  cin >> a >> b;

  if (a >= b)
  {
    cout << a << endl;
    return;
  }

  long long x = min(a, b / 2); 
  long long remaining = a - x;
  long long new_b = max(0LL, b - 2 * x);

  if (remaining >= new_b)
  {
    cout << remaining << endl;
  }
  else
  {
    cout << 0 << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
