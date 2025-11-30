#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++)
  {
    string s, v = "", c = "";
    getline(cin, s);

    cout << "Case " << i + 1 << ":" << endl;
    for (int j = 0; j < s.length(); j++)
    {
      if (s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'i' || s[j] == 'I' || s[j] == 'o' || s[j] == 'O' || s[j] == 'u' || s[j] == 'U')
      {
        v += s[j];
      }
      else if (isalpha(s[j]))
      {
        c += s[j];
      }
    }

    cout << v << endl;
    cout << c << endl;
  }

  return 0;
}