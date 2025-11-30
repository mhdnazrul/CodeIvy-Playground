#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{

 int n;
 cin >> n;
 ll V = n;
 vll a(n);
 for (int i = 0; i < n; ++i)
  cin >> a[i];
 int idx = -1;
 for (int i = 0; i < n; ++i)
 {
  if (a[i] != 0 && V % a[i] == 0)
  {
   idx = i + 1;
   break;
  }
 }
 cout << idx << endl;
}

int main()
{
 FAST_IO;
 //  int T; cin >> T;while(T--)
 solve();
 return 0;
}
