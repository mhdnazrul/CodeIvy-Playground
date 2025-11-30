#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int sum = a + b;

  for (int i = 0; i <= 9; ++i)
  {
    if (i != sum)
    {
      cout << i << endl;
      break;
    }
  }

  return 0;
}