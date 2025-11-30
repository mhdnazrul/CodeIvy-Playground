#include <iostream>
#include <vector>
#include <string>
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
  int Si, Sj;
  cin >> Si >> Sj;
  vector<string> str(h);
  for (int i = 0; i < h; ++i)
    cin >> str[i];

  string text;
  cin >> text;
  int x = Si - 1, y = Sj - 1;

  for (char m : text)
  {
    int nxt_x = x, nxt_y = y;
    if (m == 'L')
      nxt_y--;
    else if (m == 'R')
      nxt_y++;
    else if (m == 'U')
      nxt_x--;
    else if (m == 'D')
      nxt_x++;
    if (nxt_x >= 0 && nxt_x < h && nxt_y >= 0 && nxt_y < w && str[nxt_x][nxt_y] == '.')
    {
      x = nxt_x;
      y = nxt_y;
    }
  }
  cout << x + 1 << " " << y + 1 << endl;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}