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
  float a, b, c;
  cin >> a >> b >> c;
  // for NAO FORMA TRIANGULO
  if (a >= (b + c) || b >= (a + c) || c >= (b + a))
    cout << "NAO FORMA TRIANGULO\n";
  // for TRIANGULO RETANGULO
  else if ((a * a) == ((b * b) + (c * c)) || (b * b) == ((a * a) + (c * c)) || (c * c) == ((b * b) + (a * a)))
    cout << "TRIANGULO RETANGULO\n";
  // for TRIANGULO OBTUSANGULO
  else if ((a * a) > ((b * b) + (c * c)) || (b * b) > ((a * a) + (c * c)) || (c * c) > ((b * b) + (a * a)))
    cout << "TRIANGULO OBTUSANGULO\n";
  // for TRIANGULO ACUTANGULO
  else if ((a * a) < ((b * b) + (c * c)) || (b * b) < ((a * a) + (c * c)) || (c * c) < ((b * b) + (a * a)))
    cout << "TRIANGULO ACUTANGULO\n";

  // for TRIANGULO EQUILATERO
  if (a == b && a == c && b == c)
    cout << "TRIANGULO EQUILATERO\n";
  // for TRIANGULO ISOSCELES
  else if (a == b || b == c || a == c)
    cout << "TRIANGULO ISOSCELES\n";
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}