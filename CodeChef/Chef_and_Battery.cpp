// problem link:https://www.codechef.com/problems/FIFTYPE
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
    int charge;
    cin >> charge;
    if(charge==50){
        cout<<'0'<<nl;
        return;
    }
    bool flag = true;
    int cnt=0;
    while(flag){
        cnt++;
        if(charge<50){
            charge = charge+2;
        }else if(charge>50){
            charge = charge - 3;
        }else if(charge==50){
            cnt--;
            flag = false;
        }
    }
    cout<<cnt<<nl;
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