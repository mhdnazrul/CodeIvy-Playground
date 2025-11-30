/*#include <bits/stdc++.h>
#include<cmath>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr);
int main()
{
    FAST_IO;
    long long ans = 0;
    int val;

    for (int i = 0; i < 64; ++i) {
        cin >> val;
        ans += (long long)val << i;
    }

    cout << ans << endl;
    return 0;
}
*//*

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long ans = 0;
    int a;

    for (int i = 0; i < 64; ++i) {
        cin >> a;
        ans += (long long)a * pow(2, i);
    }

    cout << ans << endl;
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    for (int i = 0; i < 64; ++i) {
        string bit;
        cin >> bit;
        s = bit + s;
    }

    bitset<64> b(s);
    cout << b.to_ullong() << '\n';

    return 0;
}
