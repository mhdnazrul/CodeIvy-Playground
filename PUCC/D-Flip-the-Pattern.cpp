#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        int L = -1, R = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                L = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'B') {
                R = i;
                break;
            }
        }

        int ans = 0;
        if (L != -1 && R != -1 && R > L) {
            ans = R - L;
        }
        cout << ans << "\n";
    }
    return 0;
}
