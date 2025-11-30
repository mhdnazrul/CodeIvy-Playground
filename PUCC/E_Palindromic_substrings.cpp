// https://vjudge.net/contest/750888#problem/E
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;
bool is_palindrome(const string &s)
{
 string reversed_s = s;
 reverse(reversed_s.begin(), reversed_s.end());
 return s == reversed_s;
}

void solve()
{
 string s1, s2;
 cin >> s1 >> s2;
 if (is_palindrome(s1) || is_palindrome(s2) || is_palindrome(s1 + s2) || is_palindrome(s2 + s1))
 {
  cout << "Yes\n";
 }
 else
 {
  cout << "No\n";
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