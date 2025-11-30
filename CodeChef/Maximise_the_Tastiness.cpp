//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MAXTASTE
// Nazrul Islam
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int a,b,c,d;cin>>a>>b>>c>>d;
        int MAX_val = max(a,b)+max(c,d);
        cout<<MAX_val<<endl;
    }
    return 0;
}
