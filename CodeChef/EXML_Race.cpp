// problem link:https://www.codechef.com/START213C/problems/EXMLF1
// Author: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
template<class T> void readV(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void printV(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }
void solve() {
    int n, mx = -1, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int y, x;
        cin >> y >> x;
        int diff = y / x;
        if (mx < diff) {
            mx = diff;
            ans = i;
        }
    }
    cout << ans << '\n';
}


int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test_cases = 1;
    if(!(cin>>test_cases)) return 0;
    for(int tc = 1; tc <= test_cases; tc++){
    //  cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}