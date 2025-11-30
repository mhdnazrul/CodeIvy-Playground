// problem link:https://www.codechef.com/practice/course/strings/STRINGS/problems/HAPPYSTR
// Author: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
template<class T> void readV(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void printV(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }
bool isVowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    
    for(int i = 0; i+2 < n; i++){
        if(isVowel(s[i]) && isVowel(s[i+1]) && isVowel(s[i+2])){
            cout << "Happy\n";
            return;
        }
    }
    cout << "Sad\n";
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