// https://vjudge.net/contest/756123#problem/A
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
 int n, cnt = 0;
 cin >> n;
 vi v(n);
 for (int &i : v)
  cin >> i;

 for (int &i : v)
 {
  if (i == 1)
   cnt++;
  else
  {
   if (cnt == 0)
   {
    cout << "Invalid\n";
    return;
   }
   else
    cnt--;
  }
 }
 cout << "Valid\n";
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