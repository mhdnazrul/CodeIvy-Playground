// https://vjudge.net/contest/749293#problem/C
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
 ll n, k;
 cin >> n >> k;
 vll V(n);
 for (int i = 0; i < n;++i)
  cin >> V[i];

 int cnt = 0, crnt_size = 0;
 sort(V.begin(), V.end(),greater<ll>());
 for (int i = 0; i < n;i++){
  crnt_size++;
  if(crnt_size*V[i]>=k){
   cnt++;
   crnt_size = 0;
  }
 }
 cout << cnt << endl;
}

int main() {
  FAST_IO;
  int T; cin >> T;while(T--)
    solve();
  return 0;
}