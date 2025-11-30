// problem link:https://www.codechef.com/START210C/problems/PROFIT
// Author ~ cf handle: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,x;    cin>>n>>x;
    int profit=0;
    for(int i=x;i<=n;i++){
        profit+=i-x;
    }
    cout<<profit<<'\n';
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