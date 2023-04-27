//
// Created by ak on 4/26/23.
//https://atcoder.jp/contests/abc166/tasks/abc166_c
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
    int n, m; cin>>n>>m;
    int h[n+1];
    for(int i=1;i<=n;i++)
        cin>>h[i];
    vector<int> adj[n+1];
    for(int i=1;i<=m;i++){
        int u, v;cin>>u>>v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    vector<int> vis(n+1, 0);
    int ans=0;
    for(int i=1;i<=n;i++){
        if(vis[i])continue;
        vis[i]=1;
        bool good=true;
        for(auto child: adj[i]){
            if(h[i]<=h[child]){
                good=false;
                break;
            }
        }
        ans+=good;
    }
    cout<<ans;
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

