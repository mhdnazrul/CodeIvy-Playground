#include<bits/stdc++.h>
#include<string>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
int main()
{
    FAST_IO;
    string s1,s2;cin>>s1>>s2;
    int len = s1.length();
    bool flag=true;
    for(int i=0;i<len;i++){
            if(s1[i]!=s2[i]){
                flag = false;
                break;
            }
    }
    if(flag)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
