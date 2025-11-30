#include <iostream>
#include <vector>

using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
  double number;
  cin >> number;
  if (number >= 0 && number <= 25)
    cout << "Intervalo [0,25]\n";
  else if (number > 25 && number <= 50)
    cout << "Intervalo (25,50]\n";
  else if (number > 50 && number <= 75)
    cout << "Intervalo (50,75]\n";
  else if (number > 75 && number <= 100)
    cout << "Intervalo (75,100]\n";
  else
    cout << "Fora de intervalo\n";
}

int main()
{
  FAST_IO;
  // int t;
  // cin >> t;
  // for (int i = 0; i < t; i++){

  solve();
  //}
  return 0;
}