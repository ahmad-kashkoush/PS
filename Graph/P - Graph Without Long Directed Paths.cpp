//
// Created by ak on 7/19/23.
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
vector<int> vis;
bool cycle=false;
map<pair<int, int>, int> ans;
void dfs(int node, int color, int parent){
    vis[node]=color;
    for(auto child: adj[node]){
        if(child==parent)continue;
        if(vis[child]==-1) {
            dfs(child, 1 - color, node);
        }
        else if(vis[child]==color){
            cycle=true;
        }

    }

}
void solve(){
       int n, m; cin>>n>>m;
          adj=vector<vector<int>> (n+1);
          vector<pair<int, int>> edges(m+1);
          vis=vector<int> (n+1, -1);
          for(int i=1;i<=m;i++){
              int u, v ;
              cin>>u>>v;
              adj[u].emplace_back(v);
              adj[v].emplace_back(u);
              edges[i]={u, v};
          }
          dfs(1, 0, 0);
          if(cycle)cout<<"NO";
          else {
              cout<<"YES\n";
             for(int i=1;i<=m;i++){
                 cout<<(vis[edges[i].first]==1 and vis[edges[i].second]==0);
             }
          }
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

