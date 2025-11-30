#include <bits/stdc++.h>
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
  cout << fixed << setprecision(2);
  int amount;
  float balance, bank_charges = 0.50;
  cin >> amount >> balance;
  if (amount % 5 == 0 && amount+bank_charges <= balance)
    cout << balance - (amount + bank_charges) << endl;
  else
    cout << balance << endl;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}