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
const int N=1e5+10;
vector<vector<int>> adj;
vector<bool> vis;
map<pair<int, int>, ll> mp;
ll length[N];
void dfs(int node, int parent){
    for(auto child: adj[node]){
            if(child==parent)continue;
            length[child]=length[node]+mp[{child, node}];
            dfs(child, node);
    }

}
void solve(){
        int n; cin>>n;
        adj=vector<vector<int>>(n);
        vis=vector<bool> (n);
        reset(length, 0);
        for(int i=0;i<n-1;i++) {
            ll u, v, c;
            cin >> u >> v >> c;
            u--, v--;
            adj[u].emplace_back(v);
            adj[v].emplace_back(u);
            mp[{u, v}] = mp[{v, u}] = c;
        }
        int q, k; cin>>q>>k;
        k--;
        dfs(k, -1);
//        for(int i=0;i<n;i++){
//
//        }
        while(q--){
            int u, v;cin>>u>>v;
            u--, v--;
            cout<<length[u]-length[k]+length[v]-length[k]<<el;
        }



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

