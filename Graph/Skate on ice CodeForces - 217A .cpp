//
// Created by ak on 7/13/23.
//

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define el '\n'
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
//const int N=101;
//vector<bool> vis(N);
//vector<pair<int, int>> v(N);
//vector<int> adj[N];
//void dfs(int node){
//    vis[node]=1;
//    for(auto child:adj[node]){
//        if(!vis[child])dfs(child);
//    }
//}
//void solve(){
//    int n;cin>>n;
//
//    for(int i=0;i<n;i++){
//        int a, b; cin>>a>>b;
//        v[i]={a, b};
//        for(int j=0;j<i;j++){
//            if(a==v[j].first or b==v[j].second)
//                adj[i].emplace_back(j), adj[j].emplace_back(i);
//        }
//    }
//    int comp=0;
//    for(int i=0;i<n;i++){
//        if(!vis[i]){
//            dfs(i);
//            comp++;
//        }
//    }
//    cout<<comp-1;
//}
void solve(){
    int n; cin>>n;
    set<int> x, y;
    int comp=0;
    for(int i=0;i<n;i++){
        int a, b; cin>>a>>b;
        comp+=(!x.count(a) and !y.count(b));
        x.emplace(a), y.emplace(b);
    }
    cout<<comp-1;
}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
//        cout<<el;
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
