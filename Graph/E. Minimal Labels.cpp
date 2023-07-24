//
// Created by ak on 7/23/23.
//
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
const int N=1e5+10;
int label[N];
int cnt=1;
void dfs(int node, int p, vector<bool> &vis, vector<int> adj[]){
    vis[node]=1;
    for(int child:adj[node]){
        if(child==p or vis[child])continue;
        dfs(child, node, vis, adj);
    }
    label[node]=cnt++;
}
void solve(){
    int n, m; cin>>n>>m;
    vector<int> adj[n];
    vector<bool> vis(n, false);
    int parents[n];
    reset(parents, 0);
    reset(label, -1);
    for(int i=0;i<m;i++){
        int u, v; cin>>u>>v;
        --u, --v;
        adj[v].emplace_back(u);
        parents[u]++;
    }
    // solved bfs
    priority_queue<int> q;
    for(int i=0;i<n;i++){
        if(!parents[i])q.emplace(i);
    }
    int color=n;
    while(!q.empty()){
        int node=q.top();q.pop();
        label[node]=color--;
        for(int child: adj[node]){
            parents[child]--;
            if(!parents[child])q.push(child);
        }
    }

    for(int i=0;i<n;i++)
        cout<<label[i]<<" ";
    cout<<el;




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
