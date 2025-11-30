#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int i = 1;
  while (i <= t)
  {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int min = 0, mid = 0, max = 0;
    if (n1 > n2 && n1 > n3)
    {
      max = n1;
      if (n2 > n3)
      {
        mid = n2;
        min = n3;
      }
      else
      {
        mid = n3;
        min = n2;
      }
    }
    else if (n2 > n1 && n2 > n3)
    {
      max = n2;
      if (n1 > n3)
      {
        mid = n1;
        min = n3;
      }
      else
      {
        min = n1;
        mid = n3;
      }
    }
    else
    {
      max = n3;
      if (n1 > n2)
      {
        mid = n1;
        min = n2;
      }
      else
      {
        mid = n2;
        min = n1;
      }
    }

    cout << "Case " << i << ": " << min << " " << mid << " " << max << endl;
    i++;
  }
  return 0;
}