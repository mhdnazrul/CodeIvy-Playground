#include <iostream>

using namespace std;
using ll = long long;

void solve()
{
  int n;
  cin >> n;

  int matrix[n][n];
  int num = 1;

  for (int j = 0; j < n; j++)
  {
    int row = 0, col = j;
    while (col >= 0 && row < n)
    {
      if (row < n)
      {
        matrix[row][col] = num++;
      }
      row++;
      col--;
    }
  }

  for (int i = 1; i < n; i++)
  {
    int row = i, col = n - 1;
    while (row < n && col >= 0)
    {
      matrix[row][col] = num++;
      row++;
      col--;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}