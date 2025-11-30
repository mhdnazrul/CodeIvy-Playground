#include <iostream>
#include<vector>

using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

int main() {
FAST_IO;
int t;
cin >> t;
while (t--)
{
  long long n;
  cin >> n;
  if (n == 0)
    cout << 3 << endl;
  else if (n % 2 == 0)
    cout << 3 << endl;
  else
    cout << 6 << endl;
}
return 0;
return 0;
}