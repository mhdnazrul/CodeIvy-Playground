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

string solve(int n, const vector<long long> &a)
{
  long long total = 0;
  for (int i = 0; i < n; ++i)
    total += a[i];

  long long target = total / n;
  long long sum = 0;

  for (int i = 0; i < n; ++i)
  {
    sum += a[i];
    long long Flag = target * (i + 1);
    if (sum < Flag)
      return "NO";
  }

  return "YES";
}

int main()
{
  FAST_IO;
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
      cin >> a[i];
    cout << solve(n, a) << endl;
  }
  return 0;
}
