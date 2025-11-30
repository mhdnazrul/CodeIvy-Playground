#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    long long x1, p1, x2, p2;
    cin >> x1 >> p1 >> x2 >> p2;

    long long totalLen1 = to_string(x1).length() + p1;
    long long totalLen2 = to_string(x2).length() + p2;

    if (totalLen1 > totalLen2)
    {
      cout << ">" << endl;
    }
    else if (totalLen1 < totalLen2)
    {
      cout << "<" << endl;
    }
    else
    {
      string s1 = to_string(x1);
      string s2 = to_string(x2);

      if (s1.length() + p1 > s2.length() + p2)
      {
        cout << ">" << endl;
      }
      else if (s1.length() + p1 < s2.length() + p2)
      {
        cout << "<" << endl;
      }
      else
      {
        if (x1 > x2)
        {
          cout << ">" << endl;
        }
        else if (x1 < x2)
        {
          cout << "<" << endl;
        }
        else
        {
          cout << "=" << endl;
        }
      }
    }
  }
  return 0;
}