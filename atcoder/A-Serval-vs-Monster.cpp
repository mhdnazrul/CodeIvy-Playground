#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int H, A;
  cin >> H >> A;

  int counter = ceil((double)H / A);
  cout << counter << endl;
  return 0;
}