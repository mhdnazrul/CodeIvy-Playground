#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr);
int main() {
    FAST_IO;
    int t;
    cin >> t;
    vector<pair<string, int>> val(t);
    for (int i = 0; i < t; ++i) {
        cin >> val[i].first >> val[i].second;
    }
    vector<string> ans;
    int minimum_val = val[0].second, flag = 0;
    for (int i = 0; i < t; ++i) {
        if (minimum_val > val[i].second) {
            minimum_val = val[i].second;
            flag = i;
        }
    }

    for (int j = flag; j < t; ++j) {
        ans.push_back(val[j].first);
    }

    for (int m = 0; m < flag; ++m) {
        ans.push_back(val[m].first);
    }

    for (int i = 0; i < t; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
