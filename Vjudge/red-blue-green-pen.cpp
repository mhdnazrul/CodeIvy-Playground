#include <bits/stdc++.h>
using namespace std;

int main()
{
  int r, g, b;
  string s;
  cin >> r >> g >> b >> s;
  if (s == "Red")
  {
    if (g < b)
    {
      cout << g << endl;
    }
    else
    {
      cout << b << endl;
    }
  }
  else if (s == "Green")
  {
    if (r < b)
    {
      cout << r << endl;
    }
    else
    {
      cout << b << endl;
    }
  }
  else
  {
    if (g < r)
    {
      cout << g << endl;
    }
    else
    {
      cout << r << endl;
    }
  }
  return 0;
}