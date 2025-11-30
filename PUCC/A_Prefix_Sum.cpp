// https://vjudge.net/contest/749118#problem/A
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;
ll SOLVE_IT(const vi &V, int st, int ed)
{
 ll sum = 0;
 for (int i = st-1; i < ed; i++)
 {
  sum += V[i];
 }
 return sum;
}
void solve()
{
 int n, m;
 cin >> n >> m;
 vi V(n);
 for (int i = 0; i < n; i++)
  cin >> V[i];

 for (size_t i = 0; i < m; i++)
 {
  int st, ed;
  cin >> st >> ed;
  cout << SOLVE_IT(V, st, ed) << endl;
 }
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}

