#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
  int a, b, total_a, total_b;
  cin >> a >> b;
  total_a = a / 10;
  total_b = b / 20;
  if(total_a==total_b){    cout << "ANY" << endl;
  return;
}
cout << (total_a > total_b ? "FIRST" : "SECOND") << endl;
}

int main() {
  FAST_IO;
  int T; cin >> T;while(T--)
    solve();
  return 0;
}