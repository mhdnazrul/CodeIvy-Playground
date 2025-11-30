#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;
void solve()
{
 int n, key;
 cin >> n >> key;

 vi allvec(51, 0);
 for (int i = 1; i <= n; ++i)
 {
  int c;
  cin >> c;
  if (allvec[c] == 0)
  {
   allvec[c] = i;
  }
 }

 vi q(key);
 for (int i = 0; i < key; ++i)
 {
  cin >> q[i];
 }

 for (int i = 0; i < key; ++i)
 {
  int c = q[i];
  int fnd_pojition = allvec[c];

  cout << fnd_pojition << " ";

  for (int c = 1; c <= 50; ++c)
  {
   if (allvec[c] != 0 && allvec[c] < fnd_pojition)
   {
    allvec[c]++;
   }
  }
  allvec[c] = 1;
 }
 cout << endl;
}

int main() {
  FAST_IO;
//  int T; cin >> T;while(T--)
    solve();
  return 0;
}