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
  int start_time, end_time;
  cin >> start_time >> end_time;
  if (start_time == end_time)
    cout << "O JOGO DUROU 24 HORA(S)\n";
  else if (start_time > end_time)
    cout << "O JOGO DUROU " << (24 - start_time) + end_time << " HORA(S)\n";
  else if (start_time < end_time)
    cout << "O JOGO DUROU " << end_time - start_time << " HORA(S)\n";
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}
