// bee-1020-Age-in-Days.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int num;
  cin >> num;
  // for year check
  cout << num / 365 << " ano(s)" << endl;
  num = num % 365;
  // Month check
  cout << num / 30 << " mes(es)" << endl;
  num = num % 30;
  cout << num << " dia(s)" << endl;
  return 0;
}