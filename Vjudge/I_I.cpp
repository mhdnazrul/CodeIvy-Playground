// https://vjudge.net/contest/753967#problem/I
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
 int n, m;
 cin >> n >> m;
 vi v(m);
 for (int i = 0; i < m; i++)
  cin >> v[i];

 set<int> nums;
 for (int i = 1; i <= n; i++)
  nums.insert(i);

 for (int i = 0; i < m; i++)
  nums.erase(v[i]);

 cout << nums.size() << "\n";
 for (auto num : nums)
 {
  cout << num << " ";
 }
 cout << "\n";
 }

int main()
{
 FAST_IO;
 // int T; cin >> T;while(T--)
 solve();
 return 0;
}