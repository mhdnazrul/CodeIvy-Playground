#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
int main()
{
    FAST_IO;
    string s;cin>>s;
    vector<int> ch_pos(26);
    for(int i=0; i<26; ++i)
        ch_pos[s[i]-'A'] = i+1;

    int total_dis = 0, c_pos = ch_pos[0];
    for(int j=1; j<26; ++j){
        total_dis += abs(c_pos - ch_pos[j]);
        c_pos = ch_pos[j];
    }
    cout<<total_dis<<endl;
}
