// bee-1011-Sphere.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
  double radius, pi = 3.14159, volume;
  cin >> radius;
  volume = (4 / 3.0) * pi * (radius * radius * radius); // volume formula = 4/3 * pi * R^3
  cout << fixed << setprecision(3);
  cout << "VOLUME = " << volume << endl;
  return 0;
}