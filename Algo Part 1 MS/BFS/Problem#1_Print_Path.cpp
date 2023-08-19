//
// Created by ak on 7/22/2023.
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
void solve(){
    int n, m; cin>>n>>m;
    vector<vector<int>> adj(n);

    for(int i=0;i<m;i++){
        int u, v; cin>>u>>v;
        adj[u].emplace_back(v);
    }
    queue<int> q;
    int parent[n];
    bool vis[n];
    reset(vis, false);
    reset(parent, -1);
    q.push(0);
    while(!q.empty()){
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            for (int child: adj[node]) {
                if(!vis[child]) {
                    q.push(child);
                    vis[child]=true;
                    parent[child]=node;

                }

            }
        }

    }
    for(int i=1;i<n;i++){
        int cur=i;
        vector<int> printing;
        while(cur!=0 and cur!=-1){
            printing.emplace_back(cur);
            cur=parent[cur];
        }
        cout<<"Path From 0 to "<<i<<":";
        if(cur==0){
            printing.emplace_back(0);
            for(int j=(int)printing.size()-1;j>=0;j--){
                 cout<<printing[j]<<" ";
            }
        }else   cout<<" Doesn't Exist";
            cout<<el;
    }

}
int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<el<<el;
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
