#include <bits/stdc++.h>
using namespace std;

bool isLess(char a, char b)
{
  cout << "? " << a << " " << b << endl;
  cout.flush();
  char ch;
  cin >> ch;
  return ch == '<';
}

void solve()
{
  int N, Q;
  cin >> N >> Q;

  vector<char> a;
  for (int i = 0; i < N; ++i)
    a.push_back('A' + i);

  for (int i = 0; i < N; ++i)
  {
    for (int j = N - 1; j > i; --j)
    {
      if (isLess(a[j], a[j - 1]))
      {
        swap(a[j], a[j - 1]);
      }
    }
  }

  cout << "! ";
  for (char c : a)
  {
    cout << c;
  }
  cout << endl;
  cout.flush();
}

int main()
{
  solve();
  return 0;
}
