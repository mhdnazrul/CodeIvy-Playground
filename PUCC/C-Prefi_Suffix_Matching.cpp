#include<bits/stdc++.h>
#include<string>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
int main()
{
    FAST_IO;
    int n,m;cin>>n>>m;
    string s,t; cin>>s>>t;
    bool prefix = true, suffix = true;
    for(int i=0; i<n; ++i){
        if(s[i]!=t[i]){
            prefix = false;
            break;
        }
    }

    for(int i=0; i<m; ++i){
        if(s[n-1-i]!=t[m-1-i]){
            suffix = false;
            break;
        }
    }

    if(prefix && suffix) cout<<0<<endl;
    else if(prefix && !suffix) cout<<1<<endl;
    else if(!prefix && suffix) cout<<2<<endl;
    else cout<<3<<endl;

    return 0;
}

