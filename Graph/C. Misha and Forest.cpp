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
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
void solve(){
    int n; cin>>n;
    int deg[n], val[n];
    queue<int> q;
    for(int i=0;i<n;i++){
        cin>>deg[i]>>val[i];
        if(deg[i]==1)q.push(i);
    }
    vector<pair<int, int>> Graph;
    while(!q.empty()){
        int node=q.front();q.pop();
        if(deg[node]!=1)continue;
        int parent=val[node];
        Graph.emplace_back(node, parent);
        val[parent]^=node;
        deg[parent]--;
        if(deg[parent]==1)q.push(parent);
    }
    cout<<Graph.size()<<el;
    for(int i=0;i<Graph.size();i++)
        cout<<Graph[i].first<<" "<<Graph[i].second<<el;
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
