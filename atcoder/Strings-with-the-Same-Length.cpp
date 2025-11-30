#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int N;
  cin >> N;
  string s, t;
  cin >> s >> t;

  string result = "";
  for (int i = 0; i < N; ++i)
  {
    result += s[i];
    result += t[i];
  }

  cout << result << endl;

  return 0;
}