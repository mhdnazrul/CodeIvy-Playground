#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve(int n)
{
  int even_cnt = 0, odd_cnt = 0;
  for (int i = 0; i < n; ++i)
  {
    int tp;
    cin >> tp;
    if (tp % 2 == 0)
      even_cnt++;
    if (tp % 2 != 0)
      odd_cnt++;
  }
  if (even_cnt > odd_cnt)
  {
    cout << "READY FOR BATTLE" << endl;
    return;
  }
  cout << "NOT READY" << endl;
}

int main()
{
  FAST_IO;
  int T;
  cin >> T; // while(T--)
  solve(T);
  return 0;
}