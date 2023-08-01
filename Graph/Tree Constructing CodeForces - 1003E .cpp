//
// Created by ak on 7/29/23.
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
const int N=5* (1e5);
int v=0;
int deg[N];
int n, k, d;
vector<pair<int, int>> ans;
void dfs(int u, int dis){
    if(dis==0 or (v==n))return;
    while(v<n and deg[u]<k){
        ans.emplace_back(u, ++v);
        deg[u]++, deg[v]++;
        dfs(v, dis-1);
    }
}
void solve(){
    cin>>n>>d>>k;
    if(d>=n)return void(cout<<"NO");
    if(k==1 and n>2)return void(cout<<"NO");
    for(int i=1;i<=d;i++){
        ans.emplace_back(i, i+1);
        deg[i]++;
        deg[i+1]++;
        v=i+1;
    }
    // d+1
    // d+1, d+2, d+3,..., n
    for(int i=1;i<=d;i++)
        dfs(i, min(i-1, d-i+1));
    if(v!=n)return void(cout<<"NO");
    cout<<"YES\n";
    for(auto i:ans)
        cout<<i.first<<" "<<i.second<<el;


}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
        cout<<el;
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
