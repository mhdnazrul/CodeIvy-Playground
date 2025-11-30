#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
int main() {
  FAST_IO;
  int t;
  cin >> t;

  while (t--) {
    int n;
    ll k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    int max_len = 1, current_len = 1;

    for (int i = 1; i < n; ++i) {
      if (a[i] - a[i - 1] <= k) {
        current_len++;
      } else {
        current_len = 1;
      }
      max_len = max(max_len, current_len);
    }

    cout << n - max_len << "\n";
  }

  return 0;
}
