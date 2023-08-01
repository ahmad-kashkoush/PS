//
// Created by ak on 7/24/23.
//
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i+1<<" "
using namespace std;
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> leaves;
vector<int> ans;
int node=0;

void dfs(int node, int parent,int target, vector<int> &path){
    vis[node]=1;

//    cout<<node+1<<" ";
    if(!(parent==-1 and node!=0))path.emplace_back(node);
    if(node==target) {
        for (auto x: path)ans.emplace_back(x);
        return;
    }

    for(int child: adj[node]){
        if(!vis[child])dfs(child, node, target, path);
    }
    if(!(parent==-1 and node!=0))path.pop_back();


}
void solve() {
    int n;
    cin >> n;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n, false);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    int cnt=0;
    for(int i=0;i<n;i++)if(adj[i].size()==1 and i!=0)leaves.emplace_back(i);
//    leaves.resize(cnt+10);
    for(int i=0;i<leaves.size();i++)cin>>leaves[i], leaves[i]--;
//    cout(leaves);cout<<el;
    vector<int> path;
    dfs(0, -1, leaves[0], path);
    path.clear();
    vis = vector<bool>(n, false);
    for(int i=0;i<(int)leaves.size()-1;i++){
        dfs(leaves[i], -1, leaves[i+1], path);
        path.clear();
//        cout(ans);cout<<el;
        vis = vector<bool>(n, false);
    }
    path.clear();
    dfs(leaves.back(), -1, 0, path);
//    cout(ans);cout<<el;
//    cout(ans);
    if (ans.size() == (2 * n - 1)) {
        cout(ans);
    } else cout<<-1;
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
