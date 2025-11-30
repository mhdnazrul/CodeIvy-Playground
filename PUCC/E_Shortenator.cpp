#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
int main()
{
    FAST_IO;
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        string str; cin>>str;
        int len = str.length();
        if(len<=10){
              cout<<str<<endl;
        }else{
        cout<<str[0]<<len-2<<str[len-1]<<endl;
    }
    }
    return 0;
}
