#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int i = 1;
  while (i <= t)
  {
    int m;
    string x;
    cin >> m;
    if (m <= 100 && m >= 80)
    {
      x = "A+";
    }
    else if (m >= 75 && m <= 79)
    {
      x = "A";
    }
    else if (m >= 70 && m <= 74)
    {
      x = "A-";
    }
    else if (m >= 65 && m <= 69)
    {
      x = "B+";
    }
    else if (m >= 60 && m <= 64)
    {
      x = "B";
    }
    else if (m >= 55 && m <= 59)
    {
      x = "B-";
    }
    else if (m >= 50 && m <= 54)
    {
      x = "C";
    }
    else if (m >= 45 && m <= 49)
    {
      x = "D";
    }
    else
    {
      x = "F";
    }

    cout << "Case " << i << ": " << x << endl;
    i++;
  }
  return 0;
}