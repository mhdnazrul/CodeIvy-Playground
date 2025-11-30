// https://www.codechef.com/START204D/problems/DRAWCH
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
 string s;
 cin >> s;

 if (n % 2 != 0)
 {
  cout << "No\n";
  return;
 }

 int target_wins = n / 2;
 int alice_wins = 0;
 for (char result : s)
 {
  if (result == '1')
  {
   alice_wins++;
  }
 }

 int bob_wins = m - alice_wins;

 if (alice_wins > target_wins || bob_wins > target_wins)
 {
  cout << "No\n";
 }
 else
 {
  cout << "Yes\n";
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
