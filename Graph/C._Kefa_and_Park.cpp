//
// Created by ak on 7/31/23.
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
const int N=2e5;
vector<int> adj[N];
vector<int> c(N, 0);
int m;
int dfs(int node, int parent, int cats){
        if(adj[node].size()==1 and cats>=0 and node!=0)return 1;
        int cnt=0;
        for(int child : adj[node]){
            if(child==parent)continue;
            if(cats-c[child]<0)continue;
            if(c[child]==0)cnt+=dfs(child, node, m);
            else           cnt+=dfs(child, node, cats-c[child]);

        }
        return cnt;

}
void solve(){
        int n; cin>>n>>m;
        for(int i=0;i<n;i++)
            cin>>c[i];
        for(int i=0;i<n-1;i++){
            int u, v;cin>>u>>v;
            --u, --v;
            adj[u].emplace_back(v);
            adj[v].emplace_back(u);
        }
        cout<<dfs(0, -1, m-c[0]);
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
