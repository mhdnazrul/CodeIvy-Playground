#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
template<class T> void in(T &x){cin>>x;}
template<class T> void out(const T &x){cout<<x<<'\n';}

ll binstr_to_ll(const string &s){
    ll res = 0;
    for(char c : s){
        res = (res << 1) | (c - '0');
    }
    return res;
}

string ll_to_binstr(ll x, int m){
    string s(m, '0');
    for(int i = m-1; i >= 0; i--){
        if(x & 1) s[i] = '1';
        x >>= 1;
    }
    return s;
}

void run_case(){
    int t;
    in(t);
    while(t--){
        int n, m;
        in(n); in(m);
        vector<ll> banned(n);
        for(int i = 0; i < n; i++){
            string s;
            in(s);
            banned[i] = binstr_to_ll(s);
        }
        sort(banned.begin(), banned.end());
        ll total = (1LL << m) - n;
        ll median_idx = (total - 1) / 2;
        ll ans = median_idx;
        for(ll b : banned){
            if(b <= ans) ans++;
            else break;
        }
        out(ll_to_binstr(ans, m));
    }
}

int main(){
    fastio();
    run_case();
    return 0;
}
