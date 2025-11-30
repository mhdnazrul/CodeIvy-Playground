#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long H, N, total_attack = 0;
  cin >> H >> N;
  while (N--)
  {
    int A;
    cin >> A;
    total_attack += A;
  }

  if (total_attack >= H)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}