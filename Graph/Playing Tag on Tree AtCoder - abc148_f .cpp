//
// Created by ak on 7/26/23.
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
const int N=1e6+10;
vector<int> adj[N];
pair<int, int> dis[N];
bool vis[N];
int depth[N];
void bfs(int node, bool first){
    queue<int> q;
    reset(vis, false);
    q.push(node);
    vis[node]=1;
    int cnt=-1;
    int sz=0;
    while(!q.empty()){
        cnt++;
        sz=q.size();
        while(sz--){
            int cur=q.front();q.pop();
//            cout<<cur<<" ";
            if(first)dis[cur].first=cnt;
            else     dis[cur].second=cnt;
            for(int child: adj[cur]){
               if(!vis[child]) q.push(child);
                vis[child]=1;
            }
        }
//        cout<<el;
    }
//    cout<<el;
}
//int dfs(int node, int parent){
//    depth[node]=0;
//    for(int child: adj[node]){
//        if(child==parent)continue;
//        depth[node]=max(depth[node],1+dfs(child, node));
//    }
//    return depth[node];
//
//}
void dfsT(int node, int parent, int deFromT){
        dis[node].first=deFromT;
        for(int child: adj[node]){
            if(child==parent)continue;
            dfsT(child, node, deFromT+1);
            depth[node]=max(depth[node], depth[child]+1);
        }
}
int ans=0;
void dfsA(int node, int deFromA){
    if(dis[node].first>deFromA)
        ans=max(ans, dis[node].first+depth[node]-1);
    for(int child: adj[node]){
        if(dis[child].first<dis[node].first){
            dfsA(child, deFromA+1);
        }
    }
}
void solve(){
    int n, T, A;
//    reset(dis, 0);
    reset(depth, 0);
    cin>>n>>T>>A;
    for(int i=0;i<n-1;i++){
        int u, v; cin>>u>>v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
   ans=0;
    dfsT(A, -1, 0);
    dfsA(T, 0);
//    bfs(T, true);
//    bfs(A, false);
//    dfs(A, -1);
//    for(int i=1;i<=n;i++){
//        if(dis[i].first>dis[i].second)
//           ans=max(ans, dis[i].second+depth[i]-1);
//    }

    cout<<ans<<el;
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
