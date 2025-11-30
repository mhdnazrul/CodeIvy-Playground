// https://vjudge.net/contest/751485#problem/J
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

const int MAXN = 1e5 + 5;
vi adj[MAXN];
bool flag[MAXN];

void dfs(int u)
{
 flag[u] = true;
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

 vi V;
 for (int i = 1; i <= n; ++i)
 {
  if (!flag[i])
  {
   V.push_back(i);
   dfs(i);
  }
 }

 cout << V.size() - 1 << "\n";
 for (size_t i = 0; i < V.size() - 1; ++i)
 {
  cout << V[i] << " " << V[i + 1] << "\n";
 }
}

int main()
{
 FAST_IO;
 // int T; cin >> T; while(T--) 
 solve();
 return 0;
}