#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
  int a, b;
  cin >> a >> b;
  vi all(a+b), vb(b);
  for (int i = 0; i < a + b;++i){
    cin >> all[i];
  }
  sort(all.begin(), all.end());
  for (int i = 0; i < a + b; ++i)
  {
   if(all[i]!=all[i+1])
     cout << all[i] << (i == all.size() - 1 ? "" : " ");
  }
  cout << endl;
}

int main() {
  FAST_IO;
    solve();
  return 0;
}