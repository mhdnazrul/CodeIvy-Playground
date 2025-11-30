#include <iostream>
#include <string>

using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int i = 1; i <= t; ++i)
  {
    string s;
    int x1, x2;
    cin >> s >> x1 >> x2;

    int count = 0;
    for (int i = x1 - 1; i < x2; ++i)
    {
      char c = s[i];
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
          c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
      {
        count++;
      }
    }

    cout << "Case " << i << ": " << count << endl;
  }

  return 0;
}