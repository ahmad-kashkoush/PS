//
// Created by ak on 9/6/23.
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

void solve() {
    int h, w;
    cin >> h >> w;
    vector<string> grid(h);
    for (auto &i: grid) {
        cin >> i;
//        cout<<i<<el;
    }

    vector<vector<int>> arr(h + 10, vector<int>(w+10, 0));
    vector<vector<int>> preRow(h + 10, vector<int>(w+10, 0));
    vector<vector<int>> preCol(h + 10, vector<int>(w+10, 0));

    for(int row=0;row<h-1;row++)
        for(int col=0;col<w;col++)
            preRow[row+1][col+1]=(grid[row][col]=='.' and grid[row+1][col]=='.');

    for(int col=0;col<w-1;col++)
        for(int row=0;row<h;row++)
            preCol[row+1][col+1]=(grid[row][col]=='.' and grid[row][col+1]=='.');

    for(int row=1;row<=h;row++){
        for(int col=1;col<=w;col++){
            preRow[row][col]+=preRow[row-1][col]+preRow[row][col-1]-preRow[row-1][col-1];
            preCol[row][col]+=preCol[row-1][col]+preCol[row][col-1]-preCol[row-1][col-1];
        }
    }
//    for(int i=1;i<=h;i++) {
//        for (int j = 1; j <= w; j++)
//            cout<<preRow[i][j]+preCol[i][j]<<" ";
//        cout<<el;
//    }

    int q; cin>>q;
    while(q--){
        int x1, x2, y1, y2;
        cin>>x1>>y1>>x2>>y2;
        x1--;
        y1--;
        int ans = 0;
        ans += preRow[x2 - 1][y2] - preRow[x2 - 1][y1] - preRow[x1][y2] + preRow[x1][y1];
        ans += preCol[x2][y2 - 1] - preCol[x2][y1] - preCol[x1][y2 - 1] + preCol[x1][y1];
        cout<<ans<<el;

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
