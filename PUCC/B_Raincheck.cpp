#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
int main()
{
    string str;
    cin >> str;

    int rainy_days = 0;
    int current_days = 0;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == 'R') {
            current_days++;
            rainy_days = max(rainy_days, current_days);
        } else {
            current_days = 0;
        }
    }

    cout << rainy_days << endl;
    return 0;
}
