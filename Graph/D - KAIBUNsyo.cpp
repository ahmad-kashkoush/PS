//
// Created by ak on 7/14/23.
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
const int N=200005;
vector<vector<int>> adj;
vector<bool> vis;
void dfs(int node){
    vis[node]=false;
    for(int child : adj[node]){
        if(vis[child])dfs(child);
    }
}
void solve(){
    int n; cin>>n;
    adj=vector<vector<int>> (N, vector<int>());
    vis=vector<bool> (N, false);
    int a[n];
    set<int> Distinct;
    for(int i=0;i<n;i++){
        cin>>a[i];
        Distinct.emplace(a[i]);
        vis[a[i]]=true;
    }
     int  res=(int)Distinct.size();
    if(n==1)return void(cout<<0);
    for(int i=0;i<n;i++){
        int j=n-1-i;
        if(i>=j)break;
        adj[a[i]].emplace_back(a[j]);
        adj[a[j]].emplace_back(a[i]);

    }

    for(int i=1;i<=200000;i++){
        if(vis[i]){
            dfs(i);
            res--;
        }
    }
    cout<<res;


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
