#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

string solve(ll T) {
    if (T == 0) {
        return "0";
    }
    string text = "";
    while (T > 0) {
        ll n = T % 3;
        text += to_string(n);
        T /= 3;
    }
    reverse(text.begin(), text.end());
    return text;
}

int main() {
    FAST_IO;
    ll n;
    while (cin >> n && n >= 0) {
        cout << solve(n) << endl;
    }
    return 0;
}
