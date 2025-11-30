#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int i = 1;
  while (i <= t)
  {
    int x, n;
    cin >> x >> n;
    cout << "Case " << i << ": ";
    for (int i = 1; i * x <= n; i++)
    {
      cout << i * x << " ";
    }
    cout << endl;
    i++;
  }
  return 0;
}