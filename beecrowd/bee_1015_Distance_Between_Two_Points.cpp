// bee-1015-Distance-Between-Two-Points.cpp
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
  double x1, y1, x2, y2, result;
  cin >> x1 >> y1 >> x2 >> y2;
  // distance formula: sqrt((x2 - x1)^2 + (y2 - y1)^2)
  result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  cout << fixed << setprecision(4);
  cout << result << endl;
  return 0;
}