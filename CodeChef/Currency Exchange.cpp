#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
 ll A1, B1, A2, B2;
 cin >> A1 >> B1 >> A2 >> B2;

 ll frt = 5 * A1 + B1;
 ll scnd = 5 * A2 + B2;

 if (frt >= scnd && (frt - scnd) % 6 == 0)
  cout << "Yes\n";

 else
 cout << "No\n";
}
int main() {
  FAST_IO;
  int T; cin >> T;while(T--)
    solve();
  return 0;
}