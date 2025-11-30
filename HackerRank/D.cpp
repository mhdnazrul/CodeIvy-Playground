#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;

const int MAX = 100000;
map<int, vector<long long>> divisor_map;
vector<int> spf(MAX + 1);
void solve()
{
  for (int i = 2; i <= MAX; i++)
  {
    if (spf[i] == 0)
    {
      for (int j = i; j <= MAX; j += i)
      {
        if (spf[j] == 0)
          spf[j] = i;
      }
    }
  }
}
int Conter(long long n)
{
  int num = (int)sqrt(n);
  int result = 1;
  while (num > 1)
  {
    int p = spf[num];
    int cnt = 0;
    while (num % p == 0)
    {
      num /= p;
      cnt++;
    }
    result *= (2 * cnt + 1);
  }
  return result;
}

void precompute()
{
  solve();
  for (int i = 1; i <= MAX; ++i)
  {
    long long sq = 1LL * i * i;
    int divs = Conter(sq);
    divisor_map[divs].push_back(sq);
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  precompute();

  int T;
  cin >> T;
  while (T--)
  {
    long long L, R;
    int X;
    cin >> L >> R >> X;

    const auto &vec = divisor_map[X];
    auto it1 = lower_bound(vec.begin(), vec.end(), L);
    auto it2 = upper_bound(vec.begin(), vec.end(), R);
    cout << (it2 - it1) << '\n';
  }
  return 0;
}
