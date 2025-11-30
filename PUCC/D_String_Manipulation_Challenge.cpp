#include<bits/stdc++.h>
#include<string>
#include<cctype>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
bool isVowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}
int main()
{
    FAST_IO;
    string s;cin>>s;
    string ans = "";
    for(int i=0; i<s.length(); ++i){
        if(!isVowel(s[i])){
            ans += ".";
            ans += tolower(s[i]);
        }
    }
    cout << ans << endl;
    return 0;
}
