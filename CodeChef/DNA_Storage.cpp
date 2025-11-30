// https://www.codechef.com/practice/course/strings/STRINGS/problems/DNASTORAGE
// Nazrul Islam
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
 int n, i, tp;
 cin >> n;
 string s, str, ts;
 cin >> s;
 for (i = 0; i < n - 1; i += 2)
 {
  str = s.substr(i, 2);
  if (str == "00")
   cout << 'A';
  else if (str == "01")
   cout << 'T';
  else if (str == "10")
   cout << "C";
  else
   cout << "G";
 }
 cout << endl;
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