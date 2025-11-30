// problem link:https://www.codechef.com/problems/KTTABLE
// Author ~ cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
template<class T> void readV(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void printV(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }

void solve() {
    int n;  cin >> n;
    vector<int> arr(n);
    readV(arr);
    int cnt=0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        int diff = i==0 ? arr[0] :  arr[i] - arr[i-1];
        if(x<=diff) cnt++;
    }
    cout << cnt << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
    //  cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}   