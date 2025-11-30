// problem link:https://www.codechef.com/practice/course/arrays/ARRAYS/problems/OPMIN?tab=statement
// Author: nazrulislam_7
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
#define all(vec) (vec).begin(), (vec).end()
#define rall(vec) (vec).rbegin(), (vec).rend()
template<class T> void readV(vector<T>& v) { for(auto &x : v) cin >> x; }
template<class T> void printV(const vector<T>& v) { for(auto x : v) cout << x << ' '; cout << '\n'; }

void solve() {
    int n; cin >> n;
    vector<int> nums(n); readV(nums);
    int minimum = nums[0];
    for (int num : nums) {
        minimum = min(minimum, num);
    }

    int countMin = 0;
    for (int num : nums) {
        if (num == minimum) countMin++;
    }

    cout<<nums.size() - countMin<<nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test_cases = 1;
    if(!(cin>>test_cases)) return 0;
    for(int tc = 1; tc <= test_cases; tc++){
    //  cout << "Case #" << tc << ": ";
        solve();
    }
    return 0;
}
/* C++17 version of the above code as a class method 
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int countNonMinimum(std::vector<int>& nums) {
        if (nums.empty()) return 0;

        int minimum = nums[0];
        for (int num : nums) {
            minimum = min(minimum, num);
        }

        int countMin = 0;
        for (int num : nums) {
            if (num == minimum) countMin++;
        }

        return nums.size() - countMin;
    }
};
*/