//
// Created by ak on 7/17/23.
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
int n, m, k;
int cnt=0;
char adj[20][20][20];
int dy[6]={0, 0, 1, -1, 0, 0};
int dx[6]={1, -1, 0, 0, 0, 0};
int dz[6]={0, 0, 0, 0, 1, -1};
bool isValid(int z, int x, int y){
    if(x<0 or x>=n)return false;
    if(y<0 or y>=m)return false;
    if(z<0 or z>=k)return false;
    if(adj[z][x][y]=='#')return false;
    return true;
}
void dfs(int z, int x, int y){
    adj[z][x][y]='#';
    cnt++;
    for(int i=0;i<6;i++){
        int nx=dx[i]+x, ny=dy[i]+y, nz=dz[i]+z;
        if(!isValid(nz, nx, ny))continue;
        dfs(nz, nx, ny);
    }
}
void solve(){
    cin>>k>>n>>m;
    for(int z=0;z<k;z++){
        for(int x=0;x<n;x++){
            for(int y=0;y<m;y++){
                cin>>adj[z][x][y];
            }
        }
    }

    int x, y; cin>>x>>y;
    x--, y--;
    dfs(0, x, y);
    cout<<cnt;

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

