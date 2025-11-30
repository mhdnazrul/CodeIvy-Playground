#include <iostream>
#include <vector>

using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

int main()
{
  FAST_IO;
  int T, k, cnt = 0;
  cin >> T >> k;
  for (int i = 1; i <= T; ++i)
  {
    int n;
    cin >> n;
    if (n % k == 0)
      cnt++;
  }
  cout << cnt << endl;
  return 0;
}