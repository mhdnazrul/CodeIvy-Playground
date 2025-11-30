#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

const int MAXN = 1000000;
vector<int> primeCnt(MAXN + 1, 0);
void solve() {

 vector<bool> isPrime(MAXN + 1, true);
 isPrime[0] = isPrime[1] = false;

 for (int i = 2; i * i <= MAXN; i++)
 {
  if (isPrime[i])
  {
   for (int j = i * i; j <= MAXN; j += i)
   {
    isPrime[j] = false;
   }
  }
 }
 for (int i = 1; i <= MAXN; i++)
 {
  primeCnt[i] = primeCnt[i - 1] + (isPrime[i] ? 1 : 0);
 }
}

int main() {
  FAST_IO;
    solve();
    int T;
    cin >> T;
    while (T--)
    {
     int N;
     cin >> N;
     cout << primeCnt[N] << "\n";
    }
  return 0;
}