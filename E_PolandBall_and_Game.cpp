#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi=vector<int>;
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
template<class T> void in(T &x){cin>>x;}
template<class T> void out(const T &x){cout<<x<<'\n';}

void run_case(){
    int n, m;
    in(n); in(m);
    
    unordered_set<string> poland, enemy;
    for(int i = 0; i < n; i++){
        string w; in(w);
        poland.insert(w);
    }
    for(int i = 0; i < m; i++){
        string w; in(w);
        enemy.insert(w);
    }
    
    int both = 0;
    for(const auto &w : poland){
        if(enemy.count(w)) both++;
    }
    
    int a = n - both; 
    int b = m - both; 
    
    int p_words = a + (both + 1) / 2;
    int e_words = b + (both / 2);
    
    if(p_words > e_words) out("YES");
    else out("NO");
}

int main(){
    fastio();
    run_case();
    return 0;
}
