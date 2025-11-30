//G_Corpstrife.cpp
#include<bits/stdc++.h>
#include <string>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
bool issolve(int st, const string& s, const string& p) {
    int len_p = p.length();
    if (st + len_p > s.length()) {
        return false;
    }
    for (int i = 0; i < len_p; ++i) {
        if (s[st + i] != p[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    FAST_IO;
    string s, p;
    cin >> s >> p;
    int len_s = s.length(), len_p = p.length();
    int cnt = 0;

    for (int i = 0; i <= len_s; ++i) {
        if (issolve(i, s, p)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
