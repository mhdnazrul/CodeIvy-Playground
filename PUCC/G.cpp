#include <bits/stdc++.h>
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
  int n;
  cin >> n;
  deque<int> ans;
  bool flag = false;
  for (int i = 0; i < n; ++i)
  {
    string op;
    cin >> op;
    if (op == "reverse")
    {
      if (!ans.empty())
      {
        flag = !flag;
      }
    }
    else if (op == "toFront")
    {
      int val;
      cin >> val;
      if (!flag)
      {
        ans.push_front(val);
      }
      else
      {
        ans.push_back(val);
      }
    }
    else if (op == "push_back")
    {
      int val;
      cin >> val;
      if (!flag)
      {
        ans.push_back(val);
      }
      else
      {
        ans.push_front(val);
      }
    }
    else if (op == "front")
    {
      if (ans.empty())
      {
        cout << "No job for Ada?\n";
      }
      else
      {
        if (!flag)
        {
          cout << ans.front() << "\n";
          ans.pop_front();
        }
        else
        {
          cout << ans.back() << "\n";
          ans.pop_back();
        }
      }
    }
    else if (op == "back")
    {
      if (ans.empty())
      {
        cout << "No job for Ada?\n";
      }
      else
      {
        if (!flag)
        {
          cout << ans.back() << "\n";
          ans.pop_back();
        }
        else
        {
          cout << ans.front() << "\n";
          ans.pop_front();
        }
      }
    }
  }
}

int main()
{
  FAST_IO;
  //  int T; cin >> T;while(T--)
  solve();
  return 0;
}