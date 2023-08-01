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
const int N=1e5+10;
vector<int> adj[N];
map<pair<int, int>, int> cost;
int color[N];
void dfs(int node, int p, int c){
    color[node]=c;
    for(int child:adj[node]){
        if(color[child]==-1){
            int w=cost[{child, node}];
            int cc=(w&1?1-c:c);
            dfs(child, node, cc);
        }
    }
}
void solve(){
    int n; cin>>n;
    reset(color, -1);
    for(int i=0;i<n-1;i++){
        int u, v,w; cin>>u>>v>>w;
        u--, v--;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
        cost[{u, v}]=cost[{v, u}]=w;
    }
    dfs(0, -1, 1);
    for(int i=0;i<n;i++)
        cout<<color[i]<<el;
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
