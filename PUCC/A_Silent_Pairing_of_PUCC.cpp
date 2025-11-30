#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using vs = vector<string>;
using vc = vector<char>;
void SOLVE()
{
 string s;cin>>s;
 vc first,scnd,thd;
 int ln = s.size();
 for(int i=0;i<ln;i++){
  if(s[i]=='(')first.push_back(s[i]);
  else if(s[i]==')')first.pop_back();
  else if(s[i]=='{')scnd.push_back(s[i]);
  else if(s[i]=='}')scnd.pop_back();
  else if(s[i]=='[')thd.push_back(s[i]);
  else if(s[i]==']')thd.pop_back();
 }
 if(first.empty()&&scnd.empty()&&thd.empty())cout<<"Yes\n";
 else cout<<"No\n";
}
int main()
{
 FAST_IO;
 //int t;cin>>t;while(t--)
 SOLVE();
 return 0;
}
