// https://www.codechef.com/START204D/problems/EPISODES
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
 int h, m;
 cin >> h >> m;
 int total_time = h * m;
  int hour = total_time / 60;
  int mint = total_time % 60;
  cout << hour << " " << mint << endl;
}

int main() {
  FAST_IO;
  int T; cin >> T;while(T--)
    solve();
  return 0;
}