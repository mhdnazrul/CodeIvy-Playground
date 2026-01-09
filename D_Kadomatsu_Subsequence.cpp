/*┌────────────────────────────────────────────────────────────────────────────────────┐
  │                        >   Handle:- nazrulislam_7             
  │                        >   Author:- Nazrul Islam                   
  │Problem Link: https://atcoder.jp/contests/abc439/tasks/abc439_d
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
    int n;      cin>>n;
    vll a(n);   inV(a);
    unordered_map<ll,ll> x,y;
    for(auto v:a) x[v]++;
    ll ans =0;
    for(int i=0; i<n; i++){
        ll val = a[i];
        x[val]--;
        if(val%5==0){
            ll tp = val/5;
            ll tp2 = 7*tp;
            ll tp3 = 3*tp;
            ans+=x[tp2] * x[tp3];
            ans+= y[tp2] * y[tp3];
        }
        y[val]++;
    }
    out(ans);
}
int32_t main(){
    fastio();      int T=1; 
    //if(!(cin>>T))  return 0;
    while(T--)     run_case();
    return 0;
}
