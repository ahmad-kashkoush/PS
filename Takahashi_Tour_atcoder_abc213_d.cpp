//
// Created by ak on 7/28/23.
//
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
#define edg(adj,u, v) adj[u].emplace_back(v)
using namespace std;
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
const int N=1e6;
vector<int> adj[N];
vector<bool> vis(N, false);
vector<int> path;
void dfs(int node, int p){
    vis[node]=1;

    for(int child:adj[node]){
        if(vis[child]==0){
            path.emplace_back(child);
            dfs(child, node);
            path.emplace_back(node);

        }
    }



}
void solve(){
    int n; cin>>n;
    for(int i=1;i<n;i++){
        int u, v; cin>>u>>v;
        edg(adj, u, v);
        edg(adj, v, u);
    }
    for(int i=1;i<=n;i++)sort(all(adj[i]));
    path.emplace_back(1);
    dfs(1, -1);
    cout(path);
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
