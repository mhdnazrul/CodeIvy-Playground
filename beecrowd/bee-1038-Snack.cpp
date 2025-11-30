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
void solve()
{
  cout << fixed << setprecision(2);
  int code;
  double quantity, total_amount;
  cin >> code >> quantity;
  switch (code)
  {
  case 1:
    total_amount = quantity * 4.00;
    cout << "Total: R$ " << total_amount << '\n';
    break;

  case 2:
    total_amount = quantity * 4.50;
    cout << "Total: R$ " << total_amount << '\n';
    break;

  case 3:
    total_amount = quantity * 5.00;
    cout << "Total: R$ " << total_amount << '\n';
    break;

  case 4:
    total_amount = quantity * 2.00;
    cout << "Total: R$ " << total_amount << '\n';
    break;

  case 5:
    total_amount = quantity * 1.50;
    cout << "Total: R$ " << total_amount << '\n';
    break;

  default:
    break;
  }
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}