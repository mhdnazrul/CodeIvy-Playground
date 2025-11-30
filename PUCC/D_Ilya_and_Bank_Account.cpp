#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

int main()
{
  FAST_IO;
  int n;
  cin >> n;

  int Flag = n;
  string s = to_string(n);
  int len = s.length();

  if (len > 1)
  {
    string s1 = s.substr(0, len - 1);
    Flag = max(Flag, stoi(s1));

    string s2 = "";
    if (len >= 2)
    {
      s2 += s.substr(0, len - 2);
      s2 += s.substr(len - 1, 1);
      Flag = max(Flag, stoi(s2));
    }
  }

  cout << Flag << endl;

  return 0;
}