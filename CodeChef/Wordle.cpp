// https://www.codechef.com/practice/course/strings/STRINGS/problems/WORDLE?tab=statement
//Nazrul Islam
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
 string str, text, p;
 cin >> text >> p;
 for (int i = 0; i < 5;i++){
  if(text[i]==p[i])
   cout << "G";
   else
    cout << "B";
 }
 cout << "\n";
}

int main() {
  FAST_IO;
  int T; cin >> T;while(T--)
    solve();
  return 0;
}