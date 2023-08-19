//
// Created by ak on 8/9/23.
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
void solve(){
    int n; cin>>n;
    vector<vector<int>> adj(n+10);
    for(int i=1;i<=n;i++){
        int a; cin>>a;
        adj[i].emplace_back(a);
        if(i!=n){
            adj[i].emplace_back(i+1);
            adj[i+1].emplace_back(i);
        }
    }
    queue<pair<int, int>> q;
    vector<int> dis(n+10, -1);
    q.emplace(1, -1);
    dis[1]=0;
    while(!q.empty()){
        int node=q.front().first;
        int par=q.front().second;
        q.pop();
        for(int child:adj[node]){
            if(child==par)continue;
            if(dis[child]==-1){
                q.emplace(child, node);
                dis[child]=dis[node]+1;
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<dis[i]<<" ";

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
