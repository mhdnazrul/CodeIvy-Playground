// bee-1014-Consumption.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
  double distance, total_fuel, result;
  cin>> distance>>total_fuel;
  result = distance / total_fuel;
  cout << fixed << setprecision(3);
  cout << result << " km/l" << endl;
  return 0;
}