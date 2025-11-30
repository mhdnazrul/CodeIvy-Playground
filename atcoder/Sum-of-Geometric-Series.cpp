// Sum-of-Geometric-Series.cpp
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
int main()
{
  FAST_IO;
  double n, m;
  cin >> n >> m;
  double count = 0;
  bool Flag = true;
  for (int i = 0; i <= m; ++i)
  {
    double temp = pow(n, i);
    count += temp;
    if (count > 1000000000.00)
    {
      Flag = false;
      break;
    }
  }
  ll result = static_cast<ll>(count);
  if (!Flag)
    cout << "inf\n";
  else
    cout << result << '\n';
  return 0;
}