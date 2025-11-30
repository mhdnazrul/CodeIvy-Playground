#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
  double a, b, c, delta;
  cin >> a >> b >> c;

  delta = (pow(b, 2)) - (4 * a * c);
  if (a == 0 || delta < 0)
  {
    cout << "Impossivel calcular" << endl;
  }
  else
  {
    // R1 = (-b - sqrt(delta) / (2 * a));
    // R2 = (-b + sqrt(delta) / (2 * a));
    cout << fixed << setprecision(5);
    cout << "R1 = " << (-b + sqrt(delta)) / (2 * a) << endl;
    cout << "R2 = " << (-b - sqrt(delta)) / (2 * a) << endl;
  }
  return 0;
}