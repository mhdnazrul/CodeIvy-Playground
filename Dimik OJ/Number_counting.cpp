#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void solve()
{
  string line;
  getline(cin, line);

  stringstream ss(line);
  int num, count = 0;

  while (ss >> num)
  {
    count++;
  }

  cout << count << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  cin.ignore();

  while (t--)
  {
    solve();
  }

  return 0;
}