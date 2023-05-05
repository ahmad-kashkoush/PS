//
// Created by ak on 4/27/23.
//https://atcoder.jp/contests/abc054/tasks/abc054_c
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
vector<vector<int>> adj;
vector<bool> vis;
int ans=0;
void dfs(int node, int cnt){

    if(cnt==(int)vis.size()-1){
        ans++;
        return;
    }
    vis[node]=1;
    for(auto child: adj[node]){
        if(!vis[child]) {
            dfs(child, cnt + 1);
            vis[child]=0;
        }
    }

}
void solve(){
    int n, m; cin>>n>>m;
    adj=vector<vector<int>>(n+1);
    vis=vector<bool>(n+1, false);
    for(int i=1;i<=m;i++){
        int u, v; cin>>u>>v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    dfs(1, 1);
    cout<<ans<<el;

}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
    }

    return 0;
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

