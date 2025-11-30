#include <iostream>
#include <vector>
#include <algorithm>
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
  int n;
  cin >> n;
  vi A(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> A[i];
  }
  vi temp = A;
  sort(temp.begin(), temp.end());
  int second_larg = temp[n - 2];
  for (int i = 0; i < n; ++i)
  {
    if (A[i] == second_larg)
      cout << i + 1;
  }
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}