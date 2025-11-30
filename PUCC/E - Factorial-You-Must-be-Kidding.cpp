#include <iostream>
using namespace std;
#define FAST_IO         \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
using ll = long long;
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    FAST_IO;
    int n;

    while (cin >> n) {
        if (n < 0) {
            if ((-n) % 2 == 0) {
                cout << "Underflow!" << endl;
            } else {
                cout << "Overflow!" << endl;
            }
        } else if (n < 8) {
            cout << "Underflow!" << endl;
        } else if (n > 13) {
            cout << "Overflow!" << endl;
        } else {
            cout << factorial(n) << endl;
        }
    }

    return 0;
}
