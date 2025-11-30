#include <bits/stdc++.h>
using namespace std;

int main()
{
  short A, B;
  char s;
  cin >> A >> s >> B;
  if (s == '<')
  {
    if (A < B)
      cout << "Right" << endl;
    else
      cout << "Wrong" << endl;
  }
  else if (s == '>')
  {
    if (A > B)
      cout << "Right" << endl;
    else
      cout << "Wrong" << endl;
  }
  else
  {
    if (A == B)
      cout << "Right" << endl;
    else
      cout << "Wrong" << endl;
  }
  return 0;
}