//
// Created by ak on 8/16/23.
//https://codeforces.com/problemset/problem/59/E
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
deque<int> ans;
/*
    [Problem abstraction]
     * You are gien a graph
     * you can't  a, b, c in order
     * print shortest Path to reach n
     * you are given k [a, b, c] nodes
    [Problem solution]
    * store your graph
    * bfs from 1--> n;
    * if theres exists [parent, node, child] from [a, b, c] don't take it
    * otherwise store parent of [node, child]
    * if(child==n) print the vector of parents from child to one by going back in your parent vector
 */
void print(int from, int to, vector<vector<int>> &dis){
    while(true) {
        ans.emplace_front(to);
        if (from == 1){
            ans.emplace_front(from);
            break;
        }
        int tmp=from;
        from=dis[from][to];
        to=tmp;
    }
}
void print(int node, vector<int> &parent){
    ans.emplace_front(node);
    if(node==1)return;

    print(parent[node], parent);
}
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> adj[n + 10];
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    set<vector<int>> st;
    for (int i = 0; i < k; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        st.emplace(vector<int>{a, b, c});
    }

    queue<pair<int, int>> q;
    vector<vector<int>> paths;
    q.emplace(1, 0);
    vector<vector<int>> dis(n+10, vector<int> (n+10, 0));// dis[node, child]=parent;
    vector<int> parent(n+10, 0);
    while (!q.empty()) {
        int node = q.front().first;
        int par = q.front().second;
        q.pop();
        for (int child: adj[node]) {
            if(st.count(vector<int>{par, node, child}) or dis[node][child])continue;
            dis[node][child]=par;
            if(child==n){
                print(node, n, dis);
                cout<<ans.size()-1<<el;
                cout(ans);
                return;
            }
            q.emplace(child, node);
        }
//        for(int child: adj[node]){
//            if(st.count(vector<int>{par, node, child}) or parent[child])continue;
//            parent[child]=node;
//            if(child==n){
////                cout<<"Hello";
//                print(child, parent);
//                cout<<ans.size()-1<<el;
//                cout(ans);
//                return;
//            }
//            q.emplace(child, node);
//        }

    }

    cout << -1;
}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--) {
        solve();
//        cout << "Hello";
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
