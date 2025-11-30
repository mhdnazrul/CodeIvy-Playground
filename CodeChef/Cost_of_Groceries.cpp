// problem link:https://www.codechef.com/practice/course/arrays/ARRAYS/problems/KITCHENCOST?tab=statement
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
    int n, k; cin>>n>>k;
    vector<int>a(n), b(n);
    readV(a); readV(b);
    ll total_cost = 0;
    for(int i=0; i<n; i++){
        if(a[i]>=k){
            total_cost += b[i];
        }
    }
    cout<<total_cost<<nl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test_cases = 1;
    if(!(cin>>test_cases)) return 0;
    for(int tc = 1; tc <= test_cases; tc++){
    //  cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}
/*
class Solution {
    public:
        int compute(int n, int x, vector<int>& a, vector<int>& b) {
            int ans = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] >= x) {
                    ans += b[i];
                }
            }
            return ans;
        }
    };    
*/