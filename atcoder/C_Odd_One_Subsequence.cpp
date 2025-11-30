// problem link:https://atcoder.jp/contests/abc429/tasks/abc429_c
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
    int N;  cin >> N;
    vector<long long> A(N);
    readV(A);

    vector<long long> cnt(N + 1, 0);
    for (auto x : A)
        cnt[x]++;

    long long ans = 0;
    for (int x = 1; x <= N; ++x) {
        long long c = cnt[x];
        if (c >= 2) {
            ans += (c * (c - 1) / 2) * (N - c);
        }
    }

    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    //cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
    //  cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}