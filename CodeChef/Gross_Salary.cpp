// problem link:https://www.codechef.com/problems/FLOW011
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
    double salary;
    cin >> salary;
    if(salary < 1500) {
        double hra = 0.1 * salary;
        double da = 0.9 * salary;
        double net_salary = salary + hra + da;
        cout << fixed << setprecision(2) << net_salary << nl;
        return;
    }else {
        double hra = 500;0;
        double da = 0.98 * salary;
        double net_salary = salary + hra + da;
        cout << fixed << setprecision(2) << net_salary << nl;
        return;
    }    
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