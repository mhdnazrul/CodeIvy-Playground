#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
int main()
{
    FAST_IO;
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    for(int i=0; i<n; ++i){
        if(i==k-1){
            char ch = tolower(str[i]);
            cout<<ch;
        }else
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}
