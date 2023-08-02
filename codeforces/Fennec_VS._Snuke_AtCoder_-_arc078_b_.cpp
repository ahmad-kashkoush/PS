//
// Created by ak on 7/28/23.
//
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
#define edg(adj, u, v) adj[u].emplace_back(v);
using namespace std;
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
const int N=1e6;
vector<int> adj[N];
vector<bool> vis(N, false);
vector<int> path;
void getPath(int node, int par, int n, vector<int> &tmp){
    tmp.emplace_back(node);
    if(node==n) {
        for(auto i:tmp)
            path.emplace_back(i);
        return;
    }
//    cout<<node<<" ";
    for(int child:adj[node]){
        if(child==par)continue;
        getPath(child, node, n, tmp);
    }
    tmp.pop_back();

}
void dfs(int node, int parent, vector<bool> &inPath, int &cnt){
    cnt++;
    for(int child:adj[node]) {
        if (child == parent)continue;


        dfs(child, node, inPath, cnt);

    }
}

void solve(){
    int n; cin>>n;
    for(int i=1;i<n;i++){
        int u, v; cin>>u>>v;
        edg(adj, u, v);
        edg(adj, v, u);
    }
    vector<int> tmp;
    getPath(1, -1, n, tmp);
    vector<bool> inPath(n+1, false);
    for(auto i:path)inPath[i]=true;
    int pth=path.size()-1;
    int fenn=(pth+1)/2;
    dfs(path[0], path[1], inPath, fenn);
    cout<<(fenn>n-fenn?"Fennec":"Snuke");


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

