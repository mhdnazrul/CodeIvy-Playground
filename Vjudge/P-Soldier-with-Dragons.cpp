#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    string s;
    char ch;
    cin >> s >> ch;
    int count = 0;
    for (int j = 0; j < s.length(); j++)
    {
      if (s[j] == ch)
      {
        count++;
      }
    }
    cout << "Case " << i << ": " << count << endl;
  }
  return 0;
}