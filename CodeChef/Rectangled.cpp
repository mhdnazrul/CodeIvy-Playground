// problem link:https://www.codechef.com/problems/RCTGLD
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
    int n;  cin>>n;
    int ans = 0;
    if(n<=3){cout<<0<<nl; return;}
    for(int i=1;i<=n/2;i++){
        for(int j=i;j<=n/2;j++){
            int d = 2*(i+j);
            if(d<=n)ans++;
            else if(d>n)break;
        }
    }
    cout<<ans<<nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test_cases = 1;
    cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
    //  cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}