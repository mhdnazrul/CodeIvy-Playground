#include <iostream>

using namespace std;
using ll = long long;
// using endl = '\n';
void solve()
{
  int start, end;
  string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  cin >> start >> end;
  for (int i = start; i <= end; i++)
  {
    if (i >= 1 && i <= 9)
    {
      cout << numbers[i - 1] << endl;
    }
    else if (i > 9 && i % 2 == 0)
    {
      cout << "even" << endl;
    }
    else
    {
      cout << "odd" << endl;
    }
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();

  return 0;
}