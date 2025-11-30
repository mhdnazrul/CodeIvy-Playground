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

void solve()
{
  int h, w;
  cin >> h >> w;

  vector<vector<int>> a(h, vector<int>(w));
  for (int i = 0; i < h; ++i)
  {
    for (int j = 0; j < w; ++j)
    {
      cin >> a[i][j];
    }
  }

  vector<vector<int>> b(w, vector<int>(h));
  for (int i = 0; i < w; ++i)
  {
    for (int j = 0; j < h; ++j)
    {
      b[i][j] = a[j][i];
    }
  }

  for (int i = 0; i < w; ++i)
  {
    for (int j = 0; j < h; ++j)
    {
      cout << b[i][j];
      if (j == h - 1)
        cout << "";
      else
        cout << " ";
    }
    cout << endl;
  }
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}