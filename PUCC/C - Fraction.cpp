#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
 int n;
 cin >> n;
 int max_a = 0, max_b = 1;

 for (int i = 1; i < n; ++i)
 {
  int b = n - i;
  if (i < b && __gcd(i, b) == 1)
  {
   if (i * max_b > max_a * b)
   {
    max_a = i;
    max_b = b;
   }
  }
 }
 cout << max_a << " " << max_b << '\n';
}

int main() {
  FAST_IO;
  //int T; cin >> T;while(T--)
    solve();
  return 0;
}