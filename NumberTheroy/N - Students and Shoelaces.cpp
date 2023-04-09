//
// Created by ak on 4/7/23.
//https://codeforces.com/problemset/problem/129/B
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();

int main() {
    judge();
    int n, m; cin>>n>>m;
    vector<set<int>> adj(n+1);
    for(int i=1;i<=m;i++){
        int u, v; cin>>u>>v;
        adj[u].emplace(v);
        adj[v].emplace(u);
    }
    int cnt=0;
    while(true){
        vector<int> ToRemove;
        for(int i=1;i<=n;i++){
            if(adj[i].size()==1)
                ToRemove.emplace_back(i);
        }
        for(int i=0;i<ToRemove.size();i++){
            adj[*adj[ToRemove[i]].begin()].erase(ToRemove[i]);
            adj[ToRemove[i]].clear();
        }
        if(!ToRemove.empty())cnt++;
        else {
            cout<<cnt;
            return 0;
        }
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

