#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr);
int main()
{
    FASTIO;
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        for(int i=0; i<n; ++i){
            for(int j=0; j<k; ++j){
                cout<<char('a' + j);
            }
        }
        cout<<endl;
    }
    return 0;
}
