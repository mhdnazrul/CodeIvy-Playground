#include <iostream>
#include <vector>

using namespace std;

int a, b, c, d, e, f;
vector<int> ans;

int fn(int n)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    if (n == 2)
        return c;
    if (n == 3)
        return d;
    if (n == 4)
        return e;
    if (n == 5)
        return f;

    if (n < ans.size() && ans[n] != -1)
    {
        return ans[n];
    }

    long long result = (long long)fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6);
    result %= 10000007;

    if (n >= ans.size())
    {
        ans.resize(n + 1, -1);
    }
    ans[n] = (int)result;
    return ans[n];
}

int main()
{
    int cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        int n;
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        ans.assign(n < 6 ? 6 : n + 1, -1);
        printf("Case %d: %d\n", caseno, fn(n));
    }
    return 0;
}