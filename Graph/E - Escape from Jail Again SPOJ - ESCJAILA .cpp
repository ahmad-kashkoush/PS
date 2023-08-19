 //
// Created by ak on 8/19/23.
//https://www.spoj.com/problems/ESCJAILA/en/
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
int n, m;
bool valid(int r, int c){
    return !(r<0 or r>=n or c<0 or c>=m);
}
int bfs(int r, int c, vector<string> &grid, vector<vector<vector<bool>>> &vis){
    int dx[]={0, 0, 1, -1}, dy[]={1, -1, 0, 0};
    int dist=0;
    queue<pair<bool, pair<int, int>>> q;
    q.emplace(make_pair(false, make_pair(r, c)));
    grid[r][c]='.';
    vis[r][c][0]=true;
    while(!q.empty()){
        dist++;
        int sz=q.size();
        while(sz--) {
            int rr = q.front().second.first;
            int cc = q.front().second.second;
            bool doorState = q.front().first;
            if(grid[rr][cc]=='O')doorState=true;
            if(grid[rr][cc]=='C')doorState=false;
            q.pop();
            if (rr == 0 or rr == n - 1 or cc == 0 or cc == m - 1)
                return dist;
            for (int i = 0; i < 4; i++) {
                int nr = dx[i] + rr, nc = dy[i] + cc;
                if (!valid(nr, nc))continue;
                if (vis[nr][nc][doorState] or grid[nr][nc] == 'W')continue;
                if (grid[nr][nc] == 'D' and !doorState) continue;
                q.push({doorState, {nr, nc}});
                vis[nr][nc][doorState] = true;
//                q.push({doorState, {nr, nc}});
//                vis[nr][nc][doorState] = true;
            }

        }

    }
    return -1;
}
int main() {
    judge();

    while(true){
        cin>>n>>m;
        if(n==-1 or m==-1)break;
        vector<string> grid(n);
        vector< vector<vector<bool>> > vis(n, vector<vector<bool>>(m, vector<bool> (2, false)));
        for(int i=0;i<n;i++){
           cin>>grid[i];
        }
        for(int i=0;i<n;i++){
            bool ok=false;
            for(int j=0;j<m;j++){
                if(grid[i][j]=='H'){
                    ok=true;
                    cout<<bfs(i, j, grid, vis)<<el;
                    break;
                }
            }
            if(ok)break;
        }
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
