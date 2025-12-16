// problem link:https://vjudge.net/contest/774924?fbclid=IwY2xjawOuAAxleHRuA2FlbQIxMABicmlkETE2Z0t6UVV2SWRCTTEydVNLc3J0YwZhcHBfaWQQMjIyMDM5MTc4ODIwMDg5MgABHgxBgKWPVl7yacCwFTobbL0EJwjs0kZa8nl8WuRD0pLmYcRYLTSkRCZCZGwU_aem_AQNViO6slFjPEuUSNVJVjQ#problem/K
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
    ll a; cin>>a;
    ll tp = a;
    while(tp--){
        cout<<a;
    }
    cout<<nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test_cases = 1;
    //if(!(cin>>test_cases)) return 0;
    for(int tc = 1; tc <= test_cases; tc++){
    //  cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}