#include <iostream>
using namespace std;

bool isLucky(int n)
{
  while (n > 0)
  {
    int digit = n % 10;
    if (digit != 4 && digit != 7)
    {
      return false;
    }
    n /= 10;
  }
  return true;
}

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    if (isLucky(i) && n % i == 0)
    {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
  return 0;
}