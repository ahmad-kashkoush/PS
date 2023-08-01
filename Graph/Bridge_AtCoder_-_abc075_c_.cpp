//
// Created by ak on 7/15/23.
//

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define el '\n'
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
vector<vector<int>> adj;
vector<bool> vis;
void dfs(int node){
    vis[node]=1;

    for(auto child: adj[node]){
        if(!vis[child])
            dfs(child);
    }

}
void solve(){
       int n, m; cin>>n>>m;
       vector<pair<int, int>> edges(m);
       for(int i=0;i<m;i++){
           int u, v; cin>>u>>v;
           edges[i]=make_pair(u, v);
       }
       int ans=0;
       for(int i=0;i<m;i++){
           adj=vector<vector<int>>(n+1);
           vis=vector<bool>(n+1, false);
           for(int j=0;j<m;j++){
               if(i==j)continue;
               auto [u, v]=edges[j];
               adj[u].emplace_back(v);
               adj[v].emplace_back(u);
           }

           int comp=0;
           for(int j=1;j<=n;j++){
               if(!vis[j]){
                   dfs(j);
                   comp++;
               }
           }
           ans+=comp>1;
       }
        cout<<ans;
}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
//        cout<<el;
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

