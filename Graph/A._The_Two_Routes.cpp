//
// Created by ak on 8/8/23.
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
const int N=500;
int bfs(int st,int target,  vector<int> adj[]){
    queue<pair<int, int> > q;
    vector<int> dis(N, -1);
    q.emplace(st, -1);
    dis[st]=0;
    while(!q.empty()){
        int node=q.front().first;
        int par=q.front().second;
        q.pop();
        for(int child: adj[node]){
            if(child==par)continue;
            if(dis[child]>dis[node]+1) {
                dis[child] = dis[node]+1;
            }
            else if(dis[child]==-1){
                q.emplace(child, node);
                dis[child]=dis[node]+1;
            }
        }
    }
    return dis[target];

}

void solve() {
    int n, m;
    cin >> n>>m;
    vector<int> adj1[N], adj2[N];
    int train[N][N];
    reset(train, 0);
    for(int i=0;i<m;i++){
        int u, v; cin>>u>>v;
        train[u][v]=train[v][u]=1;
        adj1[u].emplace_back(v);
        adj1[v].emplace_back(u);
    }

    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(train[i][j])continue;
            adj2[i].emplace_back(j);
            adj2[j].emplace_back(i);

        }
    }
    if(train[1][n]==1){
        cout<<bfs(1, n, adj2);
    }else
        cout<<bfs(1, n, adj1);


}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
//        cout<<"Hello";
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
