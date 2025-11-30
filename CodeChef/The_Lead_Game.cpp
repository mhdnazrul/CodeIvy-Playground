// problem link:https://www.codechef.com/problems/TLG
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
    int n;    cin>>n;
    int player_1[n],player_2[n],mx_lead=0,diff=0,top_player=0,sum_1=0,sum_2=0;
    for(int i=0;i<n;i++)
    {
        cin>>player_1[i]>>player_2[i];
        sum_1+=player_1[i];
        sum_2+=player_2[i];
        if(sum_1>sum_2){
            diff=sum_1-sum_2;
            if(diff>mx_lead){
                mx_lead=diff;
                top_player=1;
            }
        }
        else {
            diff=sum_2-sum_1;
            if(diff>mx_lead){
                mx_lead=diff;
                top_player=2;
            }
        }
    }
    cout<<top_player<<" "<<mx_lead<<nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test_cases = 1;
    //cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
    //  cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}
