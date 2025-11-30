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
  int row, col;
  cin >> row >> col;
  if (col == 8 && row == 8)
  {
    cout << "white\n";
    return;
  }
  if (col == 1 || col == 15 || row == 1 || row == 15)
  {
    cout << "black\n";
    return;
  }
  if (col == 2 || col == 14 || row == 2 || row == 14)
  {
    cout << "white\n";
    return;
  }

  if (col == 3 || col == 13 || row == 3 || row == 13)
  {
    cout << "black\n";
    return;
  }
  if (col == 4 || col == 12 || row == 4 || row == 12)
  {
    cout << "white\n";
    return;
  }

  if (col == 5 || col == 11 || row == 5 || row == 11)
  {
    cout << "black\n";
    return;
  }
  if (col == 6 || col == 10 || row == 6 || row == 10)
  {
    cout << "white\n";
    return;
  }
  if (col == 7 || col == 9 || row == 7 || row == 9)
  {
    cout << "black\n";
    return;
  }
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}