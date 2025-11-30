#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
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
  vector<pair<int, string>> str_with_len(n);
  for (int i = 0; i < n; ++i)
  {
    string s;
    cin >> s;
    str_with_len[i] = {s.length(), s};
  }
  sort(str_with_len.begin(), str_with_len.end());
  string result = "";
  for (const auto &pair : str_with_len)
    result += pair.second;
  cout << result << endl;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}