#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int Total_liter = a + c * d;
  if(Total_liter==b){
    cout << "filled" << endl;
    return;
  }
  cout << (Total_liter > b ? "overFlow" : "Unfilled") << endl;
}

int main() {
  FAST_IO;
  int T; cin >> T;while(T--)
    solve();
  return 0;
}