//
// Created by ak on 7/12/23.
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
    int n, m;
    cin>>n>>m;
    vector<set<int>> graph(n);
    for(int i=0;i<m;i++){
        int u, v; cin>>u>>v;
        u--, v--;
        graph[u].emplace(v);
        graph[v].emplace(u);
    }
    int ans=3*m+10;
    for(int i=0;i<n;i++){
        for(auto a:graph[i]){
            for(auto b: graph[a]){
                if(graph[i].count(b)){
                    int cur=graph[i].size()+graph[a].size()+graph[b].size()-6;
                    ans=min(cur, ans);
                }
            }
        }
    }
    cout<<(ans>m?-1:ans);

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

