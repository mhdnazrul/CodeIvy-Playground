#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int dp[52][52][52][4];
bool vis[52][52][52][4];

int solve(int a, int b, int c, int mask) {
    if (vis[a][b][c][mask]) return dp[a][b][c][mask];
    vis[a][b][c][mask] = true;

    int &res = dp[a][b][c][mask];
    res = 0;

    // If column is full, move to next column
    if (mask == 3) {
        res = 1 + solve(a, b, c, 0);
        return res;
    }

    // Try square
    if (a > 0 && mask == 0) {
        res = max(res, solve(a-1, b, c, 3));
    }

    // Try S-tile (horizontal)
    if (b > 0 && mask == 0) {
        res = max(res, solve(a, b-1, c, 3));
    }

    // Try corner placements
    if (c > 0) {
        if (mask == 0)
            res = max(res, solve(a, b, c-1, 1));
        if (mask == 0)
            res = max(res, solve(a, b, c-1, 2));
        if (mask == 1)
            res = max(res, solve(a, b, c-1, 3));
        if (mask == 2)
            res = max(res, solve(a, b, c-1, 3));
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a >> b >> c;
    cout << solve(a, b, c, 0) << '\n';
    return 0;
}
