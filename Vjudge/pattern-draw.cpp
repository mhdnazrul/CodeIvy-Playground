#include <iostream>

using namespace std;
using ll = long long;

void solve()
{
  int n;
  cin >> n;
  int row = (n * 2) - 1, col = (n * 2) - 1;
  int matrix[row][col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      int val = n - min(min(i, j), min(row - 1 - i, col - 1 - j));
      cout << val << " ";
    }
    cout << endl;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();

  return 0;
}