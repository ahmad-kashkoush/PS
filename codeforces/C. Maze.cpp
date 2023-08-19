//
// Created by ak on 8/18/23.
//
#include<bits/stdc++.h>
#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();

char grid[505][505];
bool vis[505][505];
int n, m, k;
bool valid(int r, int c){return !(r>=n or r<0 or c>=m or c<0);}
int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};
void solve(int r, int c){
    vis[r][c]=true;
    for(int i=0;i<4;i++){
        int nx=dx[i]+r, ny=dy[i]+c;
        if(!valid(nx, ny))continue;
        if(vis[nx][ny] or grid[nx][ny]!='.')continue;
        solve(nx, ny);
    }

      if(k>0) {
          k--;
          grid[r][c] = 'X';
      }

}
void solve(){
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] and grid[i][j]=='.')solve(i, j);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<grid[i][j];
        cout<<el;
    }
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
