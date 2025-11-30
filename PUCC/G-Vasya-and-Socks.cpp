#include <iostream>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr);
int main() {
    FAST_IO;
    int n, m;
    cin >> n >> m;

    int days = 0;
    while (n > 0) {
        n--;
        days++;

        if (days % m == 0) {
            n++;
        }
    }

    cout << days << endl;
    return 0;
}

