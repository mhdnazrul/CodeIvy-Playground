// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JENGA
// Nazrul Islam
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--){
        int a,b;cin>>a>>b;
        cout<<(b%a==0?"YES\n":"NO\n");
    }
    return 0;
}
