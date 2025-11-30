#include <bits/stdc++.h>
using namespace std;

int main()
{
  short t;
  cin >> t;
  for (int i = 1; i <= t; ++i)
  {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    bool ari = false;
    bool geo = false;

    if (n2 - n1 == n3 - n2)
    {
      ari = true;
    }

    if (n1 != 0 && n2 != 0 && n3 != 0 && (double)n2 / n1 == (double)n3 / n2)
    {
      geo = true;
    }

    cout << "Case " << i << ": ";
    if (ari && geo)
    {
      cout << "Both" << endl;
    }
    else if (ari)
    {
      cout << "Arithmetic Progression" << endl;
    }
    else if (geo)
    {
      cout << "Geometric Progression" << endl;
    }
    else
    {
      cout << "None" << endl;
    }
  }
  return 0;
}