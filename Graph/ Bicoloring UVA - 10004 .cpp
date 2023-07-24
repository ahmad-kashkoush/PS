//
// Created by ak on 7/14/23.
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
void dfs(int node, int color, bool &cycle){
    vis[node]=color;
    for(auto child: adj[node]){
        if(vis[child]==-1)
             dfs(child, 1-color, cycle);
        else if(vis[child]==vis[node])
            cycle=false;
    }
}
void solve(){
        int n, m;
        while(cin>>n){
            if(n==0)break;
            cin>>m;
            adj=vector<vector<int>> (n);
            vis=vector<int> (n, -1);
            while(m--){
                int u, v; cin>>u>>v;
                adj[u].emplace_back(v);
                adj[v].emplace_back(u);
            }
            bool can=true;
            for(int i=0;i<n;i++){
                if(vis[i]==-1){
                   dfs(i, 0, can);
                    if(!can){
                        cout<<"NOT BICOLORABLE."<<el;
                        break;
                    }
                }
            }
            if(can)cout<<"BICOLORABLE."<<el;
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
