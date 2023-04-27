//https://codeforces.com/contest/1822/problem/F
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
vector<vector<int>> adj;
vector<bool> vis;
vector<int> Height;
void dfs(int node){
    vis[node]=1;
    for(auto child: adj[node]){
        if(!vis[child]) {
            Height[child] = Height[node] + 1;
            dfs(child);
        }
    }

}
void solve(){
    int n, k, c;cin>>n>>k>>c;
    adj=vector<vector<int>>(n+1);
    vis=vector<bool>(n+1, 0);
    for(int i=1;i<n;i++){
        int u, v; cin>>u>>v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    Height=vector<int>(n+1, 0);
    dfs(1);
    vector<int> tmp=Height;
    int node=1, h=0;

    for(int i=1;i<=n;i++){
        if(Height[i]>h){
            node=i;
            h=Height[i];
        }
    }
    Height=vector<int>(n+1, 0);
    vis=vector<bool>(n+1, 0);
    dfs(node);
    ll ans=0;
    for(int i=1;i<=n;i++)
        ans=max(ans, (ll)Height[i]*k-(ll)tmp[i]*c);
    cout<<ans<<el;


}
int main() {
    judge();
    int t=1;
    cin>>t;
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
/*
    Learnt
    1. to get diameter of tree
        - dfs(root) and store heights
        - dfs(node with maximum heights) and update heights
        - get max(heights)
 */