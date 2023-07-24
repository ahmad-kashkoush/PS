//
// Created by ak on 7/16/23.
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
int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, -1, 1};
vector<string> graph;
vector<vector<bool>> vis;
char target;
bool cycle=false;
bool isValid(int i, int j){
    return !(i<0 or i>=graph.size() or j<0 or j>=graph[0].size());
}
void dfs(int i, int j, int pari, int parj){

//    if(vis[i][j])return;
    vis[i][j]=true;
    for(int x=0;x<4;x++){
        int nx=dx[x]+i;
        int ny=dy[x]+j;
        if(!isValid(nx, ny))continue;
        if(graph[nx][ny]!=target)continue;
        if(nx==pari and ny==parj)continue;
        if(!vis[nx][ny])dfs(nx, ny, i, j);
        else if(vis[nx][ny] ){
            cycle=true;
            return;
        }


    }
}
void solve(){
    int n, m; cin>>n>>m;
    graph=vector<string>(n);
    vis=vector<vector<bool>>(n, vector<bool> (m, false));
    for(auto &str:graph)cin>>str;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]) {
                target=graph[i][j];
                dfs(i, j, i, j);
            }
            if(cycle)return void (cout<<"Yes");
        }
    }
    cout<<"No";
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

