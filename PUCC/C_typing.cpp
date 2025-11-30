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
  string text, Pattern;
  cin >> text >> Pattern;
  int n = text.length();
  int m = Pattern.length();
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      if (text[i] == Pattern[j])
      {
        cout << j + 1 << " ";
        i++;
        //j++;
      }
    }
  }
  cout << endl;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}