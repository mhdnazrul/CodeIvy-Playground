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
 int t;
 cin >> t;
 unordered_map<string, int> freq; 

 for (int i = 0; i < t; ++i)
 {
  string s;
  cin >> s;
  if (freq[s] == 0)
  {
   cout << "OK\n";
  }
  else
  {
   cout << s << freq[s] << "\n";
  }

  freq[s]++;
 }
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}
