#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  double n1, n2, result;
  cin >> str >> n1 >> n2;
  result = (n2 * 0.15) + n1; // 0.15 => 15%
  cout << fixed << setprecision(2);
  cout << "TOTAL = R$ " << result << endl;
  return 0;
}