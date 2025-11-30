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
 int a, x, b, y;
 cin >> a >> x >> b >> y;
 int len1 = to_string(a).size() + x;
 int len2 = to_string(b).size() + y;

 if (len1 > len2)
  cout << ">" << endl;
 else if (len1 < len2)
  cout << "<" << endl;
 else
 {
  string sa = to_string(a), sb = to_string(b);
  int len = sa.size() - sb.size();
  if (len > 0)
   sb += string(len, '0');
  else if (len < 0)
   sa += string(-len, '0');

  if (sa == sb)
   cout << "=" << endl;
  else if (sa > sb)
   cout << ">" << endl;
  else
   cout << "<" << endl;
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
