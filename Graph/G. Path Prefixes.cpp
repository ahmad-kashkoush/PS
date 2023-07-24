//
// Created by ak on 7/17/23.
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
const int N=200005;
ll A[N], B[N], a[N], b[N];
vector<vector<ll>>adj;
vector<ll> prefix;
int len[N];
void dfs(int node, int parent){
    if(node==1){
        A[node]=0;
        B[node]=0;
    }else {
        A[node] = A[parent]+a[node];
        B[node] = B[parent]+b[node];
    }
    prefix.emplace_back(B[node]);
    len[node]=upper_bound(all(prefix), A[node])-prefix.begin()-1;
    for(int child: adj[node]){
        dfs(child, node);
    }
    prefix.pop_back();

}
void solve(){
    int n; cin>>n;
    adj=vector<vector<ll>> (n+10);
    for(int i=2;i<=n;i++){
        int p;
        cin>>p>>a[i]>>b[i];
        adj[p].emplace_back(i);
    }
    dfs(1, 1);
    for(int i=2;i<=n;i++){
//        int len= upper_bound(all(weights[i]), A[i])-weights[i].begin();
        cout<<len[i]<<" ";
//        cout(weights[i]);
//        cout<<"--"<<A[i]<<el;

    }

}
int main() {
    judge();
    int t=1;
    cin>>t;
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

