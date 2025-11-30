// bee-1041-Coordinates-of-a-Point.cpp
#include <iostream>
#include <vector>

using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
  double x, y;
  cin >> x >> y;
  if (x == 0 && y == 0)
    cout << "Origem" << endl;
  else if (x > 0 && y > 0)
    cout << "Q1" << endl;
  else if (x < 0 && y > 0)
    cout << "Q2" << endl;
  else if (x > 0 && y < 0)
    cout << "Q4" << endl;
  else if (x < 0 && y < 0)
    cout << "Q3" << endl;
  else if (x == 0)
    cout << "Eixo Y" << endl;
  else if (y == 0)
    cout << "Eixo X" << endl;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}