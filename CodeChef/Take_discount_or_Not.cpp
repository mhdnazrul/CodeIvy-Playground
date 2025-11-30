// problem link:https://www.codechef.com/practice/course/arrays/ARRAYS/problems/DISCOUNTT
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
    int n, x,y; cin >> n >> x >> y;
    int sum = 0, discount_sum = 0;
    for(int i = 0; i < n; i++) {
        int price; cin >> price;
        sum += price;
        if(price >=y)
            discount_sum += (price - y);
    }
    if((discount_sum+x)<sum)cout<<"COUPON\n";
    else cout<<"NO COUPON\n";
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

/*
class Solution {
    public:
        string checkCoupon(int n, int x, int y, vector<int>& prices) {
        int sum = 0, discount_sum = 0;
        for(int i = 0; i < n; i++) {
            int price = prices[i];
            sum += price;
            if(price >=y)
                discount_sum += (price - y);
        }
        if((discount_sum+x)<sum)return "COUPON";
        else return "NO COUPON";
            
        }
    };
*/