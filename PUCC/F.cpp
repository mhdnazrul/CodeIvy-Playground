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
  int n;
  cin >> n;
  vll V;
  for (int i = 0; i < n; ++i)
  {
    ll val;
    cin >> val;
    V.push_back(val);
  }

  if (n <= 1)
  {
    cout << 0 << "\n";
    return;
  }

  make_heap(V.begin(), V.end(), greater<ll>());

  ll total_cost = 0;

  while (V.size() > 1)
  {
    pop_heap(V.begin(), V.end(), greater<ll>());
    ll num1 = V.back();
    V.pop_back();

    pop_heap(V.begin(), V.end(), greater<ll>());
    ll num2 = V.back();
    V.pop_back();

    ll sum = num1 + num2;
    total_cost += sum;

    V.push_back(sum);
    push_heap(V.begin(), V.end(), greater<ll>());
  }
  cout << total_cost << "\n";
}

int main()
{
  FAST_IO;
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}