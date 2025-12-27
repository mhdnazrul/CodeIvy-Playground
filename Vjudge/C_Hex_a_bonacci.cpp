/*┌────────────────────────────────────────────────────────────────────────────────────┐
  │                        >   Handle:- nazrulislam_7             
  │                        >   Author:- Nazrul Islam                   
  │Problem Link: 
  └────────────────────────────────────────────────────────────────────────────────────┘*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;      using ld=long double;
using vi=vector<int>;    using vll=vector<ll>;
using pii=pair<int,int>; using pll=pair<ll,ll>;
constexpr ll INF=4e18;   constexpr int MOD=1e7+7;
const char nl='\n';
#define sz(x) (int)(x.size())
#define all(x) begin(x),end(x)
#define rall(x) rbegin(x),rend(x)
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
template<class T> void in(T &x){cin>>x;}
template<class T> void inV(vector<T> &v){for(auto &x:v) cin>>x;}
template<class T> void out(const T &x){cout<<x<<'\n';}
template<class T> void outV(const vector<T> &v){for(int i=0;i<(int)v.size();i++) cout<<v[i]<<(i+1<(int)v.size()?' ':'\n');}

void run_case(int it){
    ll a, b, c, d, e, f;
    int n;
    cin >> a >> b >> c >> d >> e >> f >> n;

    vector<ll> dp(6);
    dp[0] = a % MOD;
    dp[1] = b % MOD;
    dp[2] = c % MOD;
    dp[3] = d % MOD;
    dp[4] = e % MOD;
    dp[5] = f % MOD;

    if(n < 6){
        cout << "Case " << it << ": " << dp[n] << '\n';
        return;
    }

    for(int i = 6; i <= n; i++){
        ll x = 0;
        for(int j = 0; j < 6; j++){
            x = (x + dp[j]) % MOD;
        }
        for(int j = 0; j < 5; j++){
            dp[j] = dp[j+1];
        }
        dp[5] = x;
    }
    cout << "Case " << it << ": " << dp[5] << '\n';
}

int32_t main(){
    fastio();      int T=1; 
    if(!(cin>>T))  return 0;
    for(int i = 1; i <= T; i++){
        run_case(i);
    }
    return 0;
}