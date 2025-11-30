// bee 1019 time Conversion
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int Seconds, time;
  cin >> Seconds;
  // for hours check
  cout << Seconds / 3600;
  time = Seconds % 3600;
  // for minute check
  cout << ":" << time / 60;
  Seconds = time % 60;
  // print Seconds
  cout << ":" << Seconds << endl;
  return 0;
}