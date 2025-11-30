#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int i = 1; i <= t; ++i)
  {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    int rowDiff = abs(r2 - r1);
    int colDiff = abs(c2 - c1);

    int maxDiff = max(rowDiff, colDiff);

    cout << "Case " << i << ": " << maxDiff << endl;
  }

  return 0;
}