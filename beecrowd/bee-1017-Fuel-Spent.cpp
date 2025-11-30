//bee 1017 solution 
#include <bits/stdc++.h>
using namespace std;
int main()
{
  float time,speed,trip;
  cin >> time >> speed;
  trip = (speed / 12) * time;
  cout << fixed << setprecision(3);
  cout << trip << endl;
  return 0;
}