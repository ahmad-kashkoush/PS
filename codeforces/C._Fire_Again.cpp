//
// Created by ahmed-kashkoush on 2/20/23.
//
//والله يابني مانا عارف ادينا بنهبد
//كود بلا هدف, تكبييييير
// Problem Link -->
/**symbols
    @!  --> important and and write it down
*/
#include<bits/stdc++.h>

#define el '\n'
#define ll long long
#define reset(v, d) memset(v, d , sizeof(v))
#define all(s)  s.begin(), s.end()
#define cin(v)  for(auto &i:v)cin>>i
#define cout(v) for(auto i:v)cout<<i<<" "
using namespace std;
void judge();void tc();
const int mod = 1e9 + 7, OO = 2 * 1e9;
const double pi = 3.1415926535897932384;
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};

vector<vector<int>> v, d;
bool valid(int r, int c, int n, int m){
    return r<=n and r>=1 and c<=m and c>=1;
}
void bfs(int r, int c, int n, int m){
    queue<pair<int, int>> q;
    q.emplace(r, c);
    d[r][c]=0;
    while(!q.empty()){
        auto [curr, curc]=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int nr=dx[i]+curr, nc=dy[i]+curc;
            if(!valid(nr, nc, n, m))continue;
            if(d[nr][nc]==-1 || d[nr][nc]>d[curr][curc]+1){
                q.emplace(nr, nc);
                d[nr][nc]=d[curr][curc]+1;
            }

        }
    }
}
void solve() {
    int n, m, k;
    cin>>n>>m>>k;
    v=d=vector<vector<int>>(n+10, vector<int>(m+10, -1));
    int x, y;
    for(int i=0;i<k;i++){
        cin>>x>>y;
        bfs(x, y, n, m);
    }
    int dep=d[x][y];
    int nr=x, nc=y;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) {
            if (d[i][j] >= dep) {
                dep = d[i][j];
                nr = i, nc = j;
            }
        }

    }
    cout<<nr<<" "<<nc;

}

int main() {
    judge();
//    tc();
    solve();
    return 0;
}
void tc(){
    int t = 1;
      cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
        cout<<el;
    }
}
void judge() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


}
