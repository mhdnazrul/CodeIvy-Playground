// bee-1047-Game-Time-with-Minutes.cpp
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
  int st_hour, st_minute, end_hour, end_minute;
  cin >> st_hour >> st_minute >> end_hour >> end_minute;

  int total_start_minutes = st_hour * 60 + st_minute;
  int total_end_minutes = end_hour * 60 + end_minute;

  int duration_minutes = total_end_minutes - total_start_minutes;

  if (duration_minutes <= 0)
  {
    duration_minutes += 24 * 60;
  }

  int duration_hours = duration_minutes / 60;
  duration_minutes %= 60;

  cout << "O JOGO DUROU " << duration_hours << " HORA(S) E " << duration_minutes << " MINUTO(S)" << endl;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}
