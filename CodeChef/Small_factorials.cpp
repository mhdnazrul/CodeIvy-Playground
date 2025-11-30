// problem link:https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FCTRL2 
// Author: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
template<class T> void readV(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void printV(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }
vector<int> multiply(vector<int> v, int x) {
    int carry = 0;
    for (int &d : v) {
        int prod = d * x + carry;
        d = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        v.push_back(carry % 10);
        carry /= 10;
    }
    return v;
}

void solve() {
    int n;
    cin >> n;
    vector<int> res = {1};
    for (int i = 2; i <= n; i++)
        res = multiply(res, i);
    for (int i = res.size() - 1; i >= 0; i--)
        cout << res[i];
    cout << "\n";
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