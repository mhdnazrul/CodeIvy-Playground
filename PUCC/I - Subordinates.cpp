// https://vjudge.net/contest/751485#problem/I
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

const int MAXN = 2e5 + 5;
vi adj[MAXN];
int tree_siz[MAXN];

void dfs(int u)
{
 tree_siz[u] = 1;
 for (int v : adj[u])
 {
  dfs(v);
  tree_siz[u] += tree_siz[v];
 }
}

void solve()
{
 int n;
 cin >> n;
 for (int i = 2; i <= n; ++i)
 {
  int v;
  cin >> v;
  adj[v].push_back(i);
 }

 dfs(1);

 for (int i = 1; i <= n; ++i)
 {
  cout << tree_siz[i] - 1 << (i == n ? "" : " ");
 }
 cout << "\n";
}

int main()
{
 FAST_IO;
 // int T; cin >> T; while(T--) 
 solve();

 return 0;
}