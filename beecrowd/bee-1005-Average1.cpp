//bee-1005-Average1.cpp
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  double A, B, result;
  cin >> A >> B;
  result = (A*3.5) + (B*7.5);
  cout << fixed << setprecision(5);
  cout << "MEDIA = " << result /(3.5+7.5) << endl;
  return 0;
}