//
// Created by ak on 7/11/23.
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
    vector<int> c(n,0);
    set<int> st[(int)1e5+1];
    for(int i=0;i<n;i++)
        cin>>c[i];
    for(int i=1;i<=m;i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        if(c[u]!=c[v]) {
            st[c[u]].emplace(c[v]);
            st[c[v]].emplace(c[u]);
        }

    }
    int ans=*min_element(all(c));
    for(int i=0;i<1e5;i++){
        if(st[i].size()>st[ans].size())
            ans=i;
    }
//    cout<<el;
    cout<<ans;
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
