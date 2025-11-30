#include <bits/stdc++.h>
using namespace std;

void result(int n)
{
  int sum = 0, digit = n;
  sum += digit / 10;
  sum += digit % 10;
  cout << sum << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    result(n);
  }
  return 0;
}