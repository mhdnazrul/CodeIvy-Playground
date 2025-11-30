#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
const ll mod = 1e9 + 7;

void solve()
{
 int n;
 cin >> n;
 vi a(n);
 for (int i = 0; i < n; ++i)
  cin >> a[i];

 int min_val = INT_MAX;
 for (int i = 0; i < n; ++i)
 {
  for (int j = 0; j < n; ++j)
  {
   if (i == j)
    continue;
   int cost;
   if (j == i + 1)
   {
    cost = a[i] + a[j] / 2;
   }
   else
   {
    cost = a[i] + a[j];
   }
   min_val = min(min_val, cost);
  }
 }

 cout << min_val << endl;
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