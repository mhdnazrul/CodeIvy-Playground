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
constexpr ll INF=4e18;   constexpr int MOD=1e9+7;
const char nl='\n';
#define sz(x) (int)(x.size())
#define all(x) begin(x),end(x)
#define rall(x) rbegin(x),rend(x)
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
template<class T> void in(T &x){cin>>x;}
template<class T> void inV(vector<T> &v){for(auto &x:v) cin>>x;}
template<class T> void out(const T &x){cout<<x<<'\n';}
template<class T> void outV(const vector<T> &v){for(int i=0;i<(int)v.size();i++) cout<<v[i]<<(i+1<(int)v.size()?' ':'\n');}

void run_case(){
    int n;      in(n);
    vll A(n + 1), B(n + 1), C(n + 1);
    for (int i = 1; i <= n; i++) cin >> A[i];
    for (int i = 1; i <= n; i++) cin >> B[i];
    for (int i = 1; i <= n; i++) cin >> C[i];
    vll P(n + 1, 0), Q(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        P[i] = P[i - 1] + (A[i] - B[i]);
        Q[i] = Q[i - 1] + (B[i] - C[i]);
    }
    ll sum_of_C = 0,ans = LLONG_MIN,bestP = P[1];
    for (int i = 1; i <= n; i++) sum_of_C += C[i];
    for (int i = 2; i <= n - 1; i++) {
        ans = max(ans, sum_of_C + bestP + Q[i]);
        bestP = max(bestP, P[i]);
    }
    out(ans);
}

int32_t main(){
    fastio();      int T=1; 
   // if(!(cin>>T))  return 0;
    while(T--)     run_case();
    return 0;
}
