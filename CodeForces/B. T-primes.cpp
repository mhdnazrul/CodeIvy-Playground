#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

bool prime(ll n)
{
 if (n < 2)
  return false;
 if (n == 2 || n == 3)
  return true;
 if (n % 2 == 0)
  return false;

 int sq = sqrt(n);
 for (int i = 3; i <= sq; i += 2)
 {
  if (n % i == 0)
   return false;
 }
 return true;
}

void sieve(ll n)
{
 vector<bool> prime(n + 1, true);
 prime[0] = prime[1] = false;
 for (int i = 2; i <= sqrt(n); i++)
 {
  if (prime[i])
  {
   for (int j = i * i; j <= n; j += i)
    prime[j] = false;
  }
 }
 ll cnt = 0;
 for (int i = 2; i <= n; i++)
 {
  if (prime[i])
   cnt++;
 }
 cout << (cnt % 2 == 0 ? "YES\n" : "NO\n");
}

int main()
{
 FAST_IO;
 int T;
 cin >> T;
 while (T--)
 {
  ll n;
  cin >> n;
  sieve(n);
 }
 return 0;
}