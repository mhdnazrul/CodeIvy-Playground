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
 unordered_map<string, string> dict;
 string line;
 while (getline(cin, line) && !line.empty())
 {
  string eng, foreign;
  size_t pos = line.find(' ');
  if (pos != string::npos)
  {
   eng = line.substr(0, pos);
   foreign = line.substr(pos + 1);
   dict[foreign] = eng;
  }
 }
 while (getline(cin, line))
 {
  if (line.empty())
   continue;
  auto it = dict.find(line);
  if (it != dict.end())
   cout << it->second << '\n';
  else
   cout << "eh\n";
 }
}

int main()
{
 FAST_IO;
 solve();
 return 0;
}