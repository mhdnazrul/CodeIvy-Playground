#include<bits/stdc++.h>
#include<string>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
int main()
{
    FAST_IO;
    string s;cin>>s;
    if(s=="SUN"){
            cout<<7<<endl;
            return 0;
        }
    vector<string> days = {"MON", "TUE", "WED", "THU", "FRI", "SAT"};
    for(int i=0;i<days.size();++i){
         if(days[i]==s){
            cout<<7-(i+1)<<endl;
            return 0;
        }
    }
    return 0;
}
