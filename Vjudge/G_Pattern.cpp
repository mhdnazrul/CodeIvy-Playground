#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, i = 1;
  cin >> t;
  while (i <= t)
  {
    cout << "Case " << i << ":" << endl;
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
      for (int j = 0; j < i; j++)
      {
        cout << a;
      }
      cout << endl;
    }
    i++;
  }
  return 0;
}