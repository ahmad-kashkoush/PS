//
// Created by ak on 7/16/23.
//

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define el '\n'
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i+1<<" "
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
//vector<vector<int>> adj;
//vector<int> vis;
vector<int> cycleNodes, par;

void dfs(int node, vector<vector<int>> &adj, vector<int> &vis, vector<int> &inCycle){
    vis[node]=1;
    par.emplace_back(node);
    for(auto child: adj[node]){
        if(!inCycle[child])continue;
        if(!vis[child])dfs(child, adj, vis, inCycle);
       else if(vis[child]==1 and cycleNodes.empty()){
          for(int i=(int)par.size()-1;i>=0;i--){
              cycleNodes.emplace_back(par[i]);
              if(par[i]==child)break;
          }
       }
    }
       vis[node]=2;
       par.pop_back();

}
void solve() {
//    Enter Graph
    int n, m;
    cin >> n >> m;
   vector<vector<int>>adj(n);
   vector<int>vis(n , 0);
    vector<int> inCycle(n, 1);
    while (m--) {
        int u, v;
        cin >> u >> v;
        --u, --v;
        adj[u].emplace_back(v);
    }
    for(int i=0;i<n;i++)
        if(!vis[i])dfs(i, adj, vis, inCycle);
    if(cycleNodes.empty())return void(cout<<-1);
// Done DFS to check cycles





    vector<int> nxt(n, -1);
    for(int i=0;i<cycleNodes.size();i++){
        nxt[cycleNodes[(i+1)%cycleNodes.size()]]=cycleNodes[i];
    }
    while(true){
        int src=-1, dst=-1;
        for(int node: cycleNodes){
            for(int child: adj[node]){
                if(nxt[child]!=-1 and nxt[node]!=child){
                    src=node, dst=child;
////                    cout<<node+1<<" "<<child+1<<el;
//                        cout<<nxt[node]<<el;
                    break;
                }
            }
            if(src!=-1)break;
        }
        if(src==-1){
            cout<<cycleNodes.size()<<el;
            for(int i=(int)cycleNodes.size()-1;i>=0;i--)
                cout<<cycleNodes[i]+1<<el;
            return;
        }
//        Done

        fill(all(vis), 0);
        fill(all(inCycle), 0);
        for(int i:cycleNodes)inCycle[i]=1;
        cycleNodes.resize(0);


        vis[src]=1;
        par.emplace_back(src);
//        cout<<dst<<el;
        dfs(dst, adj, vis, inCycle);
        par.pop_back();
        vis[src]=2;

        fill(all(nxt), -1);
        for(int i=0;i<cycleNodes.size();i++){
            nxt[cycleNodes[(i+1)%cycleNodes.size()]]=cycleNodes[i];
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
