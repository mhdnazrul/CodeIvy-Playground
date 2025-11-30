// problem link:https://www.codechef.com/START210D/problems/CHOCEAT
// Author ~ cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'

void solve() {
    ll a,b;     cin>>a>>b;
    ll total= 0;
    if(a==b)total = a+b -1;
    else total = a+b;
    cout<<total<<nl;
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