#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(int n) {
    string text;
    cin >> text;
    string result = "";

    for (int i = n - 1; i >= 0;) {
        if (text[i] == '0') {
            int num = (text[i - 2] - '0') * 10 + (text[i - 1] - '0');
            result += (char)(num + 96);
            i -= 3;
        } else {
            int num = text[i] - '0';
            result += (char)(num + 96);
            i--;
        }
    }
    reverse(result.begin(), result.end());
    cout << result << endl;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
