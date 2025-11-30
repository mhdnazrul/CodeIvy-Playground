#include <iostream>
#include <string>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr);
int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();

        string t1 = "", t2 = "";
        for (int i = 0; i < n; i++) {
            t1 += "()";
        }
        for (int i = 0; i < n; i++) {
            t2 += "(";
        }
        for (int i = 0; i < n; i++) {
            t2 += ")";
        }

        if (t1.find(s) == string::npos) {
            cout << "YES\n" << t1 << '\n';
        } else if (t2.find(s) == string::npos) {
            cout << "YES\n" << t2 << '\n';
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
