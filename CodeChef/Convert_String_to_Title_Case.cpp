// problem link:https://www.codechef.com/practice/course/strings/STRINGS/problems/TITLECASE
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
    string s;    getline(cin, s); 
    stringstream ss(s);
    string word;
    bool first_word = true;

    while (ss >> word) {
        if (!first_word) cout << " ";
        first_word = false;
        bool all_upper = true;
        for (char c : word) {
            if (!isupper(c)) {
                all_upper = false;
                break;
            }
        }

        if (all_upper) {
            cout << word;
        } else {
            cout << (char)toupper(word[0]);
            for (size_t i = 1; i < word.length(); ++i) {
                cout << (char)tolower(word[i]);
            }
        }
    }
    cout << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test_cases = 1;
    if(!(cin>>test_cases)) return 0;
    cin.ignore();
    for(int tc = 1; tc <= test_cases; tc++){
    //  cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}