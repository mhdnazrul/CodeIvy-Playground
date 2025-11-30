// https://vjudge.net/contest/756122#problem/B
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
queue<ll> q;

void solve()
{
 int n, x;
 cin >> n;

 if (n == 1)
 {
  cin >> x;
  q.push(x);
 }
 else if (n == 2)
 {
  if (!q.empty())
   q.pop();
 }
 else
 {
  if (q.empty())
   cout << "Empty!\n";
  else
   cout << q.front() << endl;
 }
}

int main()
{
 FAST_IO;
 int T;
 cin >> T;
 while (T--)
  solve();
 return 0;
}


