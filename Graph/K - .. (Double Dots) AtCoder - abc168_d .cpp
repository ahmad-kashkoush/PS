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
const int N=1e6;

void solve(){
    int n, m;cin>>n>>m;
    vector<int> adj[n];
    for(int i=0;i<m;i++){
        int u, v; cin>>u>>v;
        u--, v--;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    queue<int> q;
    q.emplace(0);
    vector<int> p(n, -1);
    while(!q.empty()) {
        int node = q.front();q.pop();
        for (int child: adj[node]) {
            if (p[child] != -1)continue;
            q.emplace(child);
            p[child] = node;
        }
    }
    for(int i=1;i<n;i++){
        if(p[i]==-1)return void(cout<<"No");
    }
    cout<<"Yes\n";
    for(int i=1;i<n;i++)
        cout<<p[i]+1<<"\n";
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
