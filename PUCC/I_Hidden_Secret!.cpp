#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);

string fun(const string &s)
{
 string res;
 for (char c : s)
 {
  if (c != ' ')
   res += tolower(c);
 }
 sort(res.begin(), res.end());
 return res;
}

void solve()
{
 string txt_1, txt_2;
 getline(cin, txt_1);
 getline(cin, txt_2);
 string n1 = fun(txt_1);
 string n2 = fun(txt_2);

 if (n1 == n2)
  cout << "Yes\n";
 else
  cout << "No\n";
}
int main()
{
 FAST_IO;
 int T;
 cin >> T;
 cin.ignore();
 for (int i = 1; i <= T; ++i)
 {
  cout << "Case " << i << ": ";
  solve();
 }
 return 0;
}