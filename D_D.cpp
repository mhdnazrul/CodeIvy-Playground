// problem link:
// Author: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
template<class T> void readV(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void printV(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }
bool isVowel(char c) {
    c = tolower(c);
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y';
}
void solve() {
    string s, f;
    cin >> s >> f;

    int i = 0, j = 0;
    int n = s.size(), m = f.size();

    while (i < n && j < m) {
        char cs = tolower(s[i]);
        char cf = tolower(f[j]);

        if (cs == cf) {
            i++;
            j++;
        } else {
            if (isVowel(cf)) {
                j++; 
            } else {
                cout << "Different\n";
                return;
            }
        }
    }

    while (j < m) {
        if (!isVowel(f[j])) {
            cout << "Different\n";
            return;
        }
        j++;
    }

    if (i == n)
        cout << "Same\n";
    else
        cout << "Different\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test_cases = 1;
    //if(!(cin>>test_cases)) return 0;
    for(int tc = 1; tc <= test_cases; tc++){
    //  cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}