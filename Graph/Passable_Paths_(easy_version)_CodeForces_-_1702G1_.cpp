
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
/*
 given a graph and multiple queries
 he need me to check if the given query nodes form on path with no subtrees

 [How]
    1. get depth
    2. dfs from deepest node in the query to avoid starting from lca node which will be in the middle
    3. to check if theres another subtrees you need to check number of ends
    4. if number of ends > 2 then Answer--> "NO"
    5. other wise I 've two Ends one I dfsed from and another one so good to go "YES"


 */
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> depth;
void Depth(int node, int parent){
    if(parent==-1)
        depth[node]=0;
    else
        depth[node]+=depth[parent]+1;
    for(int child : adj[node]){
        if(child==parent)continue;
        Depth(child, node);
    }
}
// I need only to have one leaf
int dfs(int node,int p, vector<int> &path) {

    int res = 0;
    bool deepest = false;// means node doesn't have childs on the same path deepest
    for (int child: adj[node]) {
        if (child == p)continue;
        res += dfs(child, node, path);
        deepest = deepest or path[child];// node is not an end of true
    }

    path[node] = deepest or path[node];
    if (path[node] and !deepest)res = 1;// means it's the leave
    return res;
}
void solve() {
    int n, m;
    cin >> n;
    m = n - 1;
    adj = vector<vector<int>>(n + 1);
    vis = vector<bool>(n + 1, false);
    depth=vector<int> (n+1, 0);
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    Depth(1, -1);
//    for(int i=1;i<=n;i++)
//        cout<<depth[i]<<" ";
    int q;cin>>q;
    while(q--){
        int sz;cin>>sz;
        vector<int> path(n+1, 0);
        int start=0;
        for(int i=1;i<=sz;i++){
            int node;cin>>node;
            path[node]=1;
            if(depth[node]>depth[start])
                start=node;
        }
//        if(dfs(start, path)==1)cout<<"YES\n";
//        else    cout<<"NO\n";
        cout<<(dfs(start,-1,  path)>1?"NO":"YES")<<el;
    }

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
