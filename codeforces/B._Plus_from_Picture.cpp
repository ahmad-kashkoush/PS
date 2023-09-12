//
// Created by ak on 1/29/2023.
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

void judge();

void tc();

const int mod = 1e9 + 7, OO = 2 * 1e9;
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int n, m;
vector<vector<char>> v;
vector<vector<bool>> vis;

void dfs(int r, int c){
    if(!(r>=0&&c>=0&&r<n&&c<m))
        return;
    if(vis[r][c]||v[r][c]=='.')
        return;
    vis[r][c]=1;
    for(int i=0;i<4;i++){
        int nx=dx[i]+r;
        int ny=dy[i]+c;
        dfs(nx, ny);
    }
}
void solve() {
    cin>>n>>m;
    v=vector<vector<char>>(n, vector<char> (m));
    vis=vector<vector<bool>>(n, vector<bool> (m, false));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }

    // check the cross
    int idx=-1, idy=-1;

    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            if(v[i][j]=='*') {
                bool plus = true;
                for (int x = 0; x < 4; x++) {
                    int nx = dx[x] + i;
                    int ny = dy[x] + j;
                    if (v[nx][ny] != '*'){
                        plus=false;
                        break;

                    }
                }
                if(plus)
                    idx = i, idy = j;

            }
        }
    }
//    count components
    int cmp=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(v[i][j]=='*'&&!vis[i][j]) {
                dfs(i, j);
                cmp++;
            }





    if(idx==-1||idy==-1||cmp!=1){
        cout<<"NO";
//        cout<<idx<<" "<<idy<<" "<<cmp;
        return;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='*'){
                if(i!=idx&&j!=idy){
                    cout<<"NO";
                    return;
                }
            }
        }
    }
    cout<<"YES";

}

int main() {
    judge();
//    tc();
    solve();
    return 0;
}

void tc() {
    int t = 1;
    //  cin>>t;
    for (int tc = 1; tc <= t; tc++) {
        //cout<<"#tc"<< tc<<": ";
        solve();
        //    cout<<endl;
//        cout<<el;
    }
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