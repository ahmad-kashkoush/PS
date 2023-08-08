#include<bits/stdc++.h>
#define el '\n'                              
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<""
using namespace std;
void judge();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
vector< vector<int> > adj;
// vector<bool> vis;
bool bfs(int node) {
    queue<int> q;
    q.emplace(node);
    // vis[node] = true;
    vector<int> parent(adj.size(), -1);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int child : adj[node]) {
            if(child==parent[node])continue;
            // if (vis[child])
                // return false;
            // else if (!vis[child]) {
                // q.emplace(child);
                // vis[child] = true;
                // parent[child]=node;
                if(parent[child]==-1){
                    parent[child]=node;
                    q.emplace(child);

                }else return false;
            }
        
    }
    return true;

}
void solve() {
    int n;
    cin >> n;
    // cout<<n;
    adj = vector< vector<int> >(n);
    // vis = vector<bool>(n, false);
    for (int i = 0;i < n - 1;i++) {
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    int cnt = 0;
    cout << bfs(0);


}
int main() {
    judge();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
    freopen("../../error.txt", "w", stderr);
#endif
}