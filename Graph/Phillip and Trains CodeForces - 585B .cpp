//
// Created by ak on 7/20/23.
//
/*
AA........
B.CCCCC..
.s.DDDDD......
 */
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
const int N=200;
int n;
char grid[50][N];
int vis[50][N];
bool valid(int i){
    if(i<0 or i>=3)return false;
//    if(grid[i][j]!='.')return false;
    return true;
}
bool dfs(int i, int j){
    if(j>=n-1)return true;
    vis[i][j]=1;
    if(grid[i][j+1]!='.')return false;
    
    if(valid(i-1) and !vis[i-1][j] and grid[i-1][j+1]=='.' and grid[i-1][j+2] and grid[i-1][j+3]=='.')
        if(dfs(i-1, j+3))return true;
    if(valid(i+1) and !vis[i+1][j] and grid[i+1][j+1]=='.' and grid[i+1][j+2] and grid[i+1][j+3]=='.')
        if(dfs(i+1, j+3))return true;
    if( !vis[i][j+3] and grid[i][j+1]=='.' and grid[i][j+2] and grid[i][j+3]=='.')
        if(dfs(i, j+3))return true;
    return false;
}
void solve(){
    int k; cin>>n>>k;
    reset(grid, '.');
    reset(vis, 0);
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++)
            cin>>grid[i][j];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='s'){
                if(dfs(i, j))cout<<"YES";
                else  cout<<"NO";
                return;
//                for(int i=0;i<3;i++){for(int j=0;j<n;j++)cout<<vis[i][j];cout<<el;}
            }
        }
    }
}
int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<el;
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
