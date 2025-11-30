// https://vjudge.net/contest/750888#problem/D
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
 int n;
 cin >> n;
 vector<string> V(n);
 for (int i = 0; i < n; i++)
  cin >> V[i];
 bool ans = false;
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < n; j++)
  {
   if (i == j)
    continue;
   else
   {
    string s = V[i] + V[j], temp = s;
    reverse(temp.begin(), temp.end());
    if (s == temp)
    {
     ans = true;
    }
   }
  }
 }
 cout << (ans ? "Yes\n" : "No\n");
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}