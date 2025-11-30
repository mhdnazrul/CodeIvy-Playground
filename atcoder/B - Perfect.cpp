//
// Created by leona on 2025/9/20.
//
#include <bits/stdc++.h>
using namespace std;
int a[11][11], s[11];
int main()
{
 int n, m, k, x, y;
 cin >> n >> m >> k;
 for (int i = 1; i <= k; k++)
 {
  cin >> x >> y;
  a[x][y] = 1;
 }
 for (int i = 1; i <= n; i++)
 {
  for (int j = 1; j <= m; j++)
  {
   if (a[i][j] != 1)
   {
    s[i] = 1;
    break;
   }
  }
 }
 for (int i = 1; i <= n; i++)
 {
  if (s[i] == 0)
   cout << i << ' ';
 }
}