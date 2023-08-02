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
const int N = 1e6;
vector<int> adj[N];
vector<bool> vis(N, false);
int n, m;
void bfs() {
    queue<int> q;
    q.emplace(1);

    vector<int> depth(n + 1, -1);
    vector<int> cnt(n + 1, 0);
    cnt[1] = 1;
    depth[1]=0;
    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int child : adj[node]) {
            if(depth[child]==-1){
                depth[child]=depth[node]+1;
                q.push(child);
                cnt[child]=cnt[node];
            }else if(depth[child]==depth[node]+1){
                cnt[child]+=cnt[node];
                cnt[child]%=mod;
            }
        }

    }
    cout << cnt[n];
}
void solve() {
    cin >> n >> m;
    for (int i = 0;i < m;i++) {
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    bfs();
}
int main() {
    judge();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
        // cout << t;
    }

    return 0;
}
void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    freopen("../error.txt", "w", stderr);
#endif
}