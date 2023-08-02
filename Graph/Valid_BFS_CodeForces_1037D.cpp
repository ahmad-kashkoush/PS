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
const int N = 1e6;
map<int, int> id;
bool cmp(int a, int b) {
    return id[a] < id[b];
}
void solve() {
    int n; cin >> n;
    vector<int> adj[n + 1];
    for (int i = 1;i < n;i++) {
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    int a[n];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
        id[a[i]] = i + 1;
    }

    for (int i = 1;i <= n;i++) {
        sort(all(adj[i]), cmp);
    }
    queue<int> q;
    q.push(1);
    vector<int> seq;
    vector<bool> vis(n + 1, false);
    vis[1] = true;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        seq.emplace_back(node);
        for (int child : adj[node]) {
            if (vis[child])continue;
            q.push(child);
            vis[child] = true;

        }
    }
    for (int i = 0;i < n;i++) {
        if (a[i] != seq[i])
            return void(cout << "NO");
    }


    cout << "YES";
}
int main() {
    judge();
    int t = 1;
    // cin>>t;
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
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    freopen("../error.txt", "w", stderr);
#endif
}