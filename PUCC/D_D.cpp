// https://vjudge.net/contest/756123#problem/D
// nazrulislam_7
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
 int k, n;
 cin >> k >> n;
 vector<priority_queue<int>> pq(n);
 while (n--)
 {
  int tp;
  cin >> tp;
  if (tp == 0)
  {
   int p, x;
   cin >> p >> x;
   pq[p].push(x);
  }
  else if (tp == 1)
  {
   int p;
   cin >> p;
   if (!pq[p].empty())
    cout << pq[p].top() << '\n';
  }
  else if (tp == 2)
  {
   int p;
   cin >> p;
   if (!pq[p].empty())
    pq[p].pop();
  }
 }
}
int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}