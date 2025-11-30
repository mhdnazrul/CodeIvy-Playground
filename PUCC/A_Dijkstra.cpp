// https : // vjudge.net/contest/752279#problem/A
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
 int n, m;
 cin >> n >> m;
 vector<vector<pair<int, ll>>> V(n + 1);
 for (int i = 0; i < m; ++i)
 {
  int a, b;
  ll w;
  cin >> a >> b >> w;
  V[a].push_back({b, w});
  V[b].push_back({a, w});
 }
 vll distn(n + 1, LLONG_MAX);
 vi par(n + 1, -1);
 priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
 distn[1] = 0;
 pq.push({0, 1});
 while (!pq.empty())
 {
  ll d = pq.top().first;
  int u = pq.top().second;
  pq.pop();
  if (d > distn[u])
   continue;
  for (auto &eg : V[u])
  {
   int v = eg.first;
   ll w = eg.second;
   if (distn[u] + w < distn[v])
   {
    distn[v] = distn[u] + w;
    par[v] = u;
    pq.push({distn[v], v});
   }
  }
 }
 if (distn[n] == LLONG_MAX)
 {
  cout << -1 << "\n";
  return;
 }
 vi path;
 for (int v = n; v != -1; v = par[v])
  path.push_back(v);
 reverse(path.begin(), path.end());
 for (int x : path)
  cout << x << " ";
 cout << "\n";
}

int main()
{
 FAST_IO;
 // int T; cin >> T; while(T--)
 solve();
 return 0;
}