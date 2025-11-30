#include <iostream>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
unsigned long long factorial(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  return n * factorial(n - 1);
}
void solve(ll n)
{
  ll value = factorial(n);
  if (value < 10000 && value != -1)
  {
    cout << "Underflow!" << endl;
  }
  else if (value > 6227020800)
  {
    cout << "Overflow!" << endl;
  }
  else if (value != -1)
  {
    cout << value << endl;
  }
}

int main()
{
  FAST_IO;
  ll n;
  while (cin >> n)
    solve(n);
  return 0;
}