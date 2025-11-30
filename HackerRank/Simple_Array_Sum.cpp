#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  long long sum = 0;
  for (int i = 0; i < t; i++)
  {
    long long num;
    cin >> num;
    sum += num;
  }
  cout << sum << '\n';
  return 0;
}