#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;
const double PI = 2.0 * acos(0.0);
void solve(int i)
{
  double r, circle, square, result;
  cin >> r;
  square = 4 * (pow(r, 2));
  circle = PI * (pow(r, 2));
  result = square - circle;
  cout << fixed << setprecision(2);
  cout << "Case " << i << ": " << result << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    solve(i);
  }
  return 0;
}