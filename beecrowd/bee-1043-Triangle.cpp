#include <iostream>
#include <vector>
#include <iomanip>
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
  cout << fixed << setprecision(1);
  float a, b, c;
  cin >> a >> b >> c;
  if ((a + b) > c && (a + c) > b && (b + c) > a)
    cout << "Perimetro = "<<(a + b + c) << '\n'; // Perimetro
  else
    cout << "Area = "<<((.5 * (a + b)) * c) << '\n'; // Area
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}