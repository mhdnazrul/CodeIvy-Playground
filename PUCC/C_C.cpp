// https://vjudge.net/contest/753967#problem/C
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
 int n, ln, tp, i;
 cin >> n;
 string str, txt, x, y;
 cin >> str >> txt;
 x = str, y = txt;
 sort(x.begin(), x.end());
 sort(y.begin(), y.end());
 if (x != y)
 {
  cout << -1 << endl;
  return;
 }

 vi cnt;
 for (i = 0; i < n; i++)
 {
  if (str[i] != txt[i])
  {
   int key = 0;
   for (int j = i + 1; j < n; j++)
   {
    if (str[j] == txt[i])
    {
     key = j;
     break;
    }
   }

   for (int k = key; k > i; --k)
   {
    swap(str[k], str[k - 1]);
    cnt.push_back(k);
   }
  }
 }
 ln = cnt.size();
 cout << cnt.size() << endl;
 if (ln != 0)
 {
  for (i = 0; i < ln; i++)
   cout << cnt[i] << (i == ln - 1 ? "" : " ");
  cout << endl;
 }
}

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}