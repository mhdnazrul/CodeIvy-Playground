#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s = to_string(n);
  swap(s[0], s[3]);
  cout << stoi(s) << endl;

  return 0;
}