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
  vi V(n);
  for (int i = 0; i < n; ++i)
    cin >> V[i];
  sort(V.begin(), V.end());
  for (int j = 0; j < n;++j)
    cout << V[j] << " ";
  cout << endl;
}

int main()
{
  FAST_IO;
  int T;
  cin >> T; // while(T--)
  solve(T);
  return 0;
}