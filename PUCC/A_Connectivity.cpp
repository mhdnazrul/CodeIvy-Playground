// https://vjudge.net/contest/751485#problem/A
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

const int MAXN = 101;
vi adj[MAXN];
bool flag[MAXN];
int cnt = 0;

void dfs(int u)
{
 flag[u] = true;
 cnt++;
 for (int v : adj[u])
 {
  if (!flag[v])
  {
   dfs(v);
  }
 }
}

void solve()
{
 int n, m;
 cin >> n >> m;
 for (int i = 0; i < m; ++i)
 {
  int u, v;
  cin >> u >> v;
  adj[u].push_back(v);
  adj[v].push_back(u);
 }

 if (n == 0)
 {
  cout << "YES\n";
  return;
 }

 dfs(1);

 if (cnt == n)
 {
  cout << "YES\n";
 }
 else
 {
  cout << "NO\n";
 }
}

int main()
{
 FAST_IO;
 // int T; cin >> T; while(T--) 
 solve();
 return 0;
}