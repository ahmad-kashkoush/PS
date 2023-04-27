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
    int n, m; cin>>n>>m;
    unordered_set<int> st[n+1], vis;
    for(int i=1;i<=m;i++){
        int u, v; cin>>u>>v;
        st[u].emplace(v);
        st[v].emplace(u);
    }
    int center=-1;
    for(int i=1;i<=n;i++) {
        if (st[i].empty()){
            center = i;
            break;
        }
    }
    cout<<n-1<<el;
    for(int i=1;i<=n;i++){
        if(i==center)continue;
        cout<<center<<" "<<i<<el;
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
