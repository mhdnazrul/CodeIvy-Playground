// https://vjudge.net/contest/756123#problem/B
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
 int n, i;
 cin >> n;
 vi V(n);
 for (int &x : V)
  cin >> x;

 stack<int> sk;
 vi ans(n);
 for (i = 0; i < n; i++)
 {
  while (!sk.empty() && V[sk.top()] >= V[i])
   sk.pop();

  if (sk.empty())
   ans[i] = 0;
  else
   ans[i] = sk.top() + 1;

  sk.push(i);
 }
 for (int &x : ans)
  cout << x << " ";
 cout << '\n';
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}