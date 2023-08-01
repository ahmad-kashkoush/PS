//
// Created by ak on 7/25/23.
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
int red=0, blue=0, nicee=0;
vector<int> adj[N];
int Color[N];
pair<int, int> dfs(int node, int parent){
    pair<int, int> ret={0, 0};
    if(Color[node]==1)ret.first=1;
    else if(Color[node]==2)ret.second=1;
    for(int child: adj[node]){
        if(child==parent)continue;
        auto [r, b]=dfs(child, node);
        if((r==red and !b) or (b==blue and !r))
            nicee++;
        ret.first+=r;
        ret.second+=b;
    }
    return ret;
}
void solve(){
    int n; cin>>n;
    reset(Color, 0);
    for(int i=0;i<n;i++) {
        cin >> Color[i];
        red+=Color[i]==1;
        blue+=Color[i]==2;
    }
    for(int i=0;i<n-1;i++){
        int u, v;cin>>u>>v;
        u--, v--;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    dfs(0, -1);
    cout<<nicee;
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
