#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
int main()
{
  FAST_IO;
  int n;
  cin >> n;
  vector<int> key;
  for (int i = 1; i * i <= n; ++i)
  {
    key.push_back(i * i);
  }
  cout << key.size() << endl;
  for (int door : key)
  {
    cout << door << " ";
  }
  cout << endl;
  return 0;
}
