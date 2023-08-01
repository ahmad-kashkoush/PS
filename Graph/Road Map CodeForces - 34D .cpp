//
// Created by ak on 7/25/23.
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
void dfs(int node, int p, int parent[], vector<int> adj[]){
    parent[node]=p;
    for(int child :adj[node]){
        if(child==p)continue;
        dfs(child, node, parent, adj);
    }
}
void solve(){
    int n, r1, r2;
    cin>>n>>r1>>r2;
    vector<int> adj[n+1];
    int parent[n+1];
    for(int i=1;i<=n;i++){
        if(i==r1)continue;
        int c; cin>>c;
        adj[i].emplace_back(c);
        adj[c].emplace_back(i);
    }
    reset(parent, -1);
    dfs(r2, -1, parent, adj);
    for(int i=1;i<=n;i++)
        if(i!=r2)cout<<parent[i]<<" ";
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

