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
 vector<long long> a(n);

 for (int i = 0; i < n; i++)
 {
  cin >> a[i];
 }

 sort(a.begin(), a.end());

 bool flag = false;
 for (int i = 0; i < n - 2; i++)
 {
  if (a[i] + a[i + 1] > a[i + 2])
  {
   flag = true;
   break;
  }
 }

 cout << (flag ? "YES" : "NO") << "\n";
}

int main() {
  FAST_IO;
  //int T; cin >> T;while(T--)
    solve();
  return 0;
}
