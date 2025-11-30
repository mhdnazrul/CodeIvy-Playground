// https://vjudge.net/contest/751485#problem/C
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
  ll c;
  cin >> a >> b >> c;
  V[a].push_back({b, c});
 }
 vll distn(n + 1, LLONG_MAX);
 distn[1] = 0;
 priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
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
    pq.push({distn[v], v});
   }
  }
 }
 for (int i = 1; i <= n; ++i)
 {
  cout << distn[i] << " ";
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