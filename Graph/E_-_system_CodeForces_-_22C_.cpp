//
// Created by ak on 7/12/23.
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
    ll n, m, v;
    cin>>n>>m>>v;
    vector<pair<int, int>> edge;
    if(m>(n*(n-1)/2) or m<(n-1))return void(cout<<-1);
    for(int i=1;i<=n and m;i++){
        if(i==v)continue;
         edge.emplace_back(i, v);
         m--;
    }
    int root=1;
    root+=(root==v);
    for(int i=1;i<=n and m; i++){
        if(i==v or i==root)continue;
        for(int j=i+1;j<=n and m;j++){
            if(j==v or j==root)continue;
            edge.emplace_back(i, j);
            m--;
        }
    }
    if(m>0)cout<<"-1\n";
    else{
        for(auto a:edge){
            cout<<a.first<<" "<<a.second<<el;
        }
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
