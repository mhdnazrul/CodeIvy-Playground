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
  int goal_OF_messi, messi, goal_OF_cr7, cr7;
  cin >> goal_OF_messi >> messi >> goal_OF_cr7 >> cr7;
  ll Total_goal_messi = goal_OF_messi * 2 + messi;
  ll Total_goal_cr7 = goal_OF_cr7 * 2 + cr7;
  if (Total_goal_cr7 == Total_goal_messi)
    cout << "Equal\n";
  else if (Total_goal_cr7 > Total_goal_messi)
    cout << "Ronaldo\n";

  else
    cout << "Messi\n";
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}