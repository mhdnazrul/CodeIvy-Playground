// problem link:https://www.codechef.com/practice/course/strings/STRINGS/problems/WCC
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
    int x;    cin >> x;
    string s;    cin >> s;
    int car = 0, chef = 0;
    for(char c : s) {
        if(c == 'C') car += 2;
        else if(c == 'N') chef += 2;
        else {car++;chef++;}
    }
    if(car > chef) cout << 60 * x << nl;
    else if(chef > car) cout << 40 * x << nl;
    else cout << 55 * x << nl;
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