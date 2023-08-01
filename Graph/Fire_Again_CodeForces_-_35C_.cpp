//
// Created by ak on 7/30/23.
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
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
vector<vector<int>> depth;
vector<vector<bool>> vis;

int dx[]={0, 0, 1, -1, 1, -1, 1, -1};
int dy[]={1, -1, 0, 0, 0, 0, -1, 1};
bool valid(int r, int c, int n, int m){
    if(r<0 or r>=n)return false;
    if(c<0 or c>=m)return false;
    return true;
}
void bfs(int r, int c, int n, int m){
    depth[r][c]=0;
    queue<pair<int, int>> q;
    q.emplace(r, c);
    while(!q.empty()){
        auto [x, y]=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nx=dx[i]+x;
            int ny=dy[i]+y;
            if(!valid(nx, ny, n, m) )continue;
            if(depth[x][y]+1<depth[nx][ny] or depth[nx][ny]==-1) {
                q.emplace(nx, ny);
                depth[nx][ny] = depth[x][y] + 1;
            }

        }
    }

}
void solve(){
    int n, m;
    cin>>n>>m;
    depth =vector<vector<int>> (n+10, vector<int>(m+10, -1));
    int k; cin>>k;
    while(k--){
        int x, y;cin>>x>>y;x--, y--;
        bfs(x, y, n, m);
    }
    pair<int, int> last;
    int mx=0;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++){
        if(depth[i][j]>=mx){
            mx=depth[i][j];
            last.first=i;
            last.second=j;
        }
    }

    cout<<last.first+1<<" "<<last.second+1;
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

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
