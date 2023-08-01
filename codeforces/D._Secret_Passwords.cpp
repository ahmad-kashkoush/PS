//
// Created by ahmed-kashkoush on 2/11/23.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
/**symbols
    @!  --> important and and write it down
*/
#include<bits/stdc++.h>

#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();void tc();
vector<vector<int>> adj;
vector<bool> vis;
void dfs(int node){
    vis[node]=1;
    for(auto child: adj[node]){
        if(!vis[child])
            dfs(child);
    }

}
void add_edge(int u, int v){
    adj[u].emplace_back(v);
    adj[v].emplace_back(u);
}
int Connected(int n){
        int cnt=0;
        for(int i=1;i<=n;i++)
            if(!vis[i]){dfs(i);cnt++;}
        return cnt;
}
void solve() {
    int n; cin>>n;
    map<char, int> id;
    adj.resize(n+1);
    vis.resize(n+1, false);
    for(int i=1;i<=n;i++ ){
        string str;cin>>str;
        for(auto s:str){
            if(id[s]!=0 and id[s]!=i){
                add_edge(i, id[s]);
            }
            id[s]=i;
        }
    }
    cout<<Connected(n);

}

int main() {
    judge();
//    tc();
    solve();
    return 0;
}
void tc(){
    int t = 1;
    //  cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        //cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        //cout<<el;
    }
}
void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}