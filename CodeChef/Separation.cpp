// problem link:https://www.codechef.com/START213C/problems/SEPX
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
    int n,x;    cin>>n>>x;
    int eq = 0, mn =0, mx = 0;
    for(int i = 0; i<n; i++){
        int z;  cin>>z;
        if(z==x)eq++;
        else if(z<x)mn++;
        else mx++;
    }
    if(eq>0 || mn == 0|| mx==0)cout<<"YES\n";
    else cout<<"NO\n";
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