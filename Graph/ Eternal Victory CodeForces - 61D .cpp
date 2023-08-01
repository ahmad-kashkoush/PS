//
// Created by ak on 7/24/23.
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
vector<vector<int>> adj;
vector<bool> vis;
map<pair<int, int>, ll> cost;
ll mx=0;
void dfs(int node,int p, ll sum){
    vis[node]=1;
    for(int child: adj[node]) {
        if (child == p)continue;
        mx = max(sum + cost[{child, node}], mx);
        dfs(child, node, sum + cost[{child, node}]);
    }

}
ll ans=0;
void solve(){
    int n; cin>>n;
    adj=vector<vector<int>> (n);
    vis=vector<bool> (n, false);
    for(int i=0;i<n-1;i++){
        int u, v;ll c;
        cin>>u>>v>>c;
        u--, v--;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
        cost[{u, v}]=cost[{v, u}]=c;
        ans+=2* c;
    }
    dfs(0,-1, 0);
    cout<<ans-mx;
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
