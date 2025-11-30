//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLIPCARDS
//Nazrul Islam
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--){
        int n,x;    cin>>n>>x;
        int faceDown = n - x;
        int minFlips = min(x, faceDown);
        cout << minFlips << endl;
    }
    return 0;
}
