#include <bits/stdc++.h>
using namespace std;

#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
using vll = vector<long long>;
int main()
{
    FAST_IO;
    int t;
    cin >> t;
    vll n(t);
    for (int i = 0; i < t; ++i)
        cin >> n[i];
    int cnt = 0;
    for (int m = 0; m < t * t; m++)
    {
        vll nums = n;
        int c = 0;
        for (int i = 0; i < t; i++)
        {
            if (nums[i] % 2 == 0)
            {
                c++;
                int tp = nums[i] / 2;
                n[i] = tp;
            }
            else
                break;
        }
        if (c == t)
            cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
//  