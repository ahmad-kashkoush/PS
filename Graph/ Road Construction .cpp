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
void solve(){
        int n, m; cin>>n>>m;
        set<int> bad;
        while(m--){
            int a, b; cin>>a>>b;
            bad.emplace(a);
            bad.emplace(b);
        }
        int root;
        for(int i=1;i<=n;i++){
            if(!bad.count(i)){
                root=i;
                break;
            }

        }
//        if(root>n)
        vector<pair<int, int>> adj;
        for(int i=1;i<=n;i++){
            if(i==root)continue;
            adj.emplace_back(root, i);
        }
        cout<<adj.size()<<el;
        for(int i=0;i<adj.size();i++)
            cout<<adj[i].first<<" "<<adj[i].second<<el;
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
