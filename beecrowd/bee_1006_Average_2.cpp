// bee-1006-Average-2.cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
  float A, B, C, result;
  cin >> A >> B >> C;
  result = (A * 2) + (B * 3) + (C * 5);
  cout << fixed << setprecision(1);
  cout << "MEDIA = "<< result / 10 << endl;
  return 0;
}