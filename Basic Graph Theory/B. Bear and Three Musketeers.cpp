//
// Created by ak on 4/25/23.
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

int main() {
    judge();
    int n, m;
    cin>>n>>m;
    int edge[n+1][n+1];
    reset(edge, 0);
    int deg[n+1];
    reset(deg, 0);
    for(int i=0;i<m;i++){
        int u, v; cin>>u>>v;
        edge[u][v]=edge[v][u]=1;
        deg[u]++, deg[v]++;
    }
    int res=OO;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(edge[i][j]){
                for(int k=j+1;k<=n;k++){
                    if(edge[i][k] and edge[j][k])
                        res=min(res, deg[i]+deg[j]+deg[k]);
                }
            }
        }
    }
    cout<<(res!=OO?res-6:-1)<<el;


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
