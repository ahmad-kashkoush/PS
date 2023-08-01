//
// Created by ak on 7/23/23.
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
const int N=1e5+10;
vector<vector<int>> adj;
map<pair<int, int> , int> mp;
int vis[N];
set<pair<int, int>> Dont;
set<int> Target;
int x;
int a, b;
//How to solve
/*
    just get check if there exist node : cur
    and cur != b and a-->cur == b--> cur-->
    so when we xor them we get the correct answer

 */
set<int> PossibleValues;
void dfsA(int node, int parent, int weight){
    if(node==b)return;
    PossibleValues.emplace(weight);
    for(int child: adj[node]){
        if(child==parent)continue;
        dfsA(child, node, weight^mp[{child, node}]);
    }
}
bool dfsB(int node, int parent, int weight){
    if(node!=b and PossibleValues.count(weight))return true;
    for(int child: adj[node]){
        if(child==parent)continue;
        if(dfsB(child, node, weight^mp[{child, node}]))return true;
    }
    return false;
}
void solve(){
    reset(vis, 0);
    int n;
    cin>>n>>a>>b;
    a--, b--;
    adj=vector<vector<int>>(n);
    for(int i=0;i<n-1;i++){
        int u, v, w;
        cin>>u>>v>>w;
        u--, v--;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
        mp[{u, v}]=mp[{v, u}]=w;

    }
    dfsA(a, -1, 0);
    if(dfsB(b, -1, 0))cout<<"YES";
    else cout<<"NO";
    cout<<el;
    PossibleValues.clear();
    mp.clear();

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
