//
// Created by ak on 6/29/23.
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
void solve(){
    int n, m; cin>>n>>m;
    vector<string> grid(n);
    int row[n], col[m];
    reset(row, 0);reset(col, 0);
    for(int i=0;i<n;i++){
        cin>>grid[i];
        int cnt=0;
        for(int j=0;j<m;j++){
            if(grid[i][j]=='.')
                row[i]++, col[j]++;
        }
    }

    int ans=OO;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            ans=min(ans, row[i]+col[j]-(grid[i][j]=='.'));
    }
    cout<<ans;


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
