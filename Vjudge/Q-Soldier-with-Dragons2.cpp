#include <iostream>
#include <string>

using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int i = 1; i <= t; ++i)
  {
    string s, d;
    cin >> s >> d;

    int count = 0;
    for (int i = 0; i <= s.length() - d.length(); ++i)
    {
      bool match = true;
      for (int j = 0; j < d.length(); ++j)
      {
        if (s[i + j] != d[j])
        {
          match = false;
          break;
        }
      }
      if (match)
      {
        count++;
      }
    }

    cout << "Case " << i << ": " << count << endl;
  }

  return 0;
}