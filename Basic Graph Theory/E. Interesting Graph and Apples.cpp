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
vector<vector<int>> adj;
vector<bool> vis;
bool cycle=0;
void dfs(int node, int par){
    vis[node]=1;
    for(auto child: adj[node]){
        if(!vis[child])
            dfs(child, node);
        else if(child!=par)
            cycle=1;
    }

}
void solve(){
    int n, m; cin>>n>>m;
    adj=vector<vector<int>>(n+1);
    vis=vector<bool>(n+1, 0);
    for(int i=1;i<=m;i++){
        int u, v; cin>>u>>v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    int comp=0;
    for(int i=1;i<=n;i++){
        if(vis[i])continue;
        comp++;
        dfs(i, -1);
    }
    /*
     funny ring and intersting or can be funny
     1. must be 1 connected component
     2. number edges equal number of nodes
     e.g  3
            3
           / \
           2-1
           3 edges and 3 nodes
     */
    if((cycle and comp!=1) or (cycle and n!=m) or m>n)return void(cout<<"NO\n");
    for(int i=1;i<=n;i++)if(adj[i].size()>2)return void(cout<<"NO\n");
    /*
       1. i--> j , when i and j not on the same component
       2. add edge between start and end
     */
    priority_queue<pair<int, int>> pq;// used to store first and last of every componenet
    vis=vector<bool>(n+1, 0);
    for(int i=1;i<=n;i++){
        if(vis[i])continue;
        vis[i]=1;
        if(adj[i].size()==1){// a side
            int par=i, child=adj[i][0];
            while(adj[child].size()==2){
                vis[child]=1;
                int x=(adj[child][0]==par?adj[child][1]:adj[child][0]);
                par=child;
                child=x;

            }
            vis[child]=1;
            pq.emplace(-min(i, child), -max(i, child));
        }else if(adj[i].empty())pq.emplace(-i, -i);
        else if(adj[i].size()>2)return void(cout<<"NO\n");
    }
    cout<<"YES\n"<<n-m<<el;
    int edges=n-m;
    while(pq.size()>1){
        auto [s1, e1]=pq.top();
        pq.pop();
        auto [s2, e2]=pq.top();
        pq.pop();
        cout<<-s1<<" "<<-s2<<el;
        pq.emplace(max(e2, e1), min(e2, e1));//reversed max, min, because it's negative value;
        edges--;
    }
    if(edges)cout<<-pq.top().first<<" "<<-pq.top().second;




}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
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
