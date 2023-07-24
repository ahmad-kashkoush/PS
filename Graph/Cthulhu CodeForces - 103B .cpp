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
int cycle=0;
void dfs(int node, int parent){
    vis[node]=1;
    for(auto child: adj[node]){
        if(!vis[child])
            dfs(child, node);
        else if(vis[child] and child!=parent)
            cycle++;
    }

}
void solve() {
    int n, m;cin>>n>>m;
    adj = vector<vector<int>>(n + 1);
    vis = vector<bool>(n + 1, false);
    while (m--) {
        int u, v;
        cin >> u >> v;
            adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    cycle=0;
   int  comp=0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]){
            dfs(i, -1);
           comp++;
        }
    }
//    cout<<cycle<<el;
    if(comp!=1 or cycle!=2)
        cout<<"NO";
    else
        cout<<"FHTAGN!";


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

