// https://vjudge.net/contest/751485#problem/H
#include <bits/stdc++.h>
using namespace std;
#define FAST_IO               \
 ios::sync_with_stdio(false); \
 cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
 int n, m;
 cin >> n >> m;
 vector<string> V(n);
 pair<int, int> start, end;
 for (int i = 0; i < n; ++i)
 {
  cin >> V[i];
  for (int j = 0; j < m; ++j)
  {
   if (V[i][j] == 'A')
    start = make_pair(i, j);
   if (V[i][j] == 'B')
    end = make_pair(i, j);
  }
 }
 vector<vector<bool>> vis(n, vector<bool>(m, false));
 vector<vector<pair<int, int>>> par(n, vector<pair<int, int>>(m, make_pair(-1, -1)));
 vector<vector<char>> move(n, vector<char>(m, '.'));
 queue<pair<int, int>> q;
 q.push(start);
 vis[start.first][start.second] = true;
 int dx[] = {0, 0, 1, -1};
 int dy[] = {1, -1, 0, 0};
 char dir[] = {'R', 'L', 'D', 'U'};
 bool found = false;
 while (!q.empty())
 {
  pair<int, int> cur = q.front();
  q.pop();
  int x = cur.first, y = cur.second;
  if (cur == end)
  {
   found = true;
   break;
  }
  for (int d = 0; d < 4; ++d)
  {
   int nx = x + dx[d], ny = y + dy[d];
   if (nx >= 0 && nx < n && ny >= 0 && ny < m &&
       !vis[nx][ny] && V[nx][ny] != '#')
   {
    vis[nx][ny] = true;
    par[nx][ny] = make_pair(x, y);
    move[nx][ny] = dir[d];
    q.push(make_pair(nx, ny));
   }
  }
 }
 if (!found)
 {
  cout << "NO\n";
  return;
 }
 cout << "YES\n";
 string path;
 int x = end.first, y = end.second;
 while (make_pair(x, y) != start)
 {
  path += move[x][y];
  pair<int, int> p = par[x][y];
  x = p.first;
  y = p.second;
 }
 reverse(path.begin(), path.end());
 cout << path.size() << "\n"
      << path << "\n";
}

int main()
{
 FAST_IO;
 // int T; cin >> T; while(T--)
 solve();
 return 0;
}