#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

bool isPalindrome(string a, string b) {
    string str = a + b;
    string ans = str;
    reverse(ans.begin(), ans.end());
    return str == ans;
}

int main() {
    FAST_IO;
    int n;
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; ++i) {
        cin >> str[i];
    }
    int cnt=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i==j) continue;
            else if (isPalindrome(str[i], str[j])) {
                cnt++;
            }
        }
    }
    if(cnt>0) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}

