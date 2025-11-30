#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s = to_string(n);
  string middleDigits = s.substr(1, 2);
  int middleNumber = stoi(middleDigits);
  cout << middleNumber << endl;

  return 0;
}