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
void solve(){
    int n, m; cin>>n>>m;
    vector<int> deg(n+1, 0);
    for(int i=0;i<m;i++){
        int u, v; cin>>u>>v;
        deg[u]++, deg[v]++;
    }
    map<int, int> cnt;
    for(int i=1;i<=n;i++)
       cnt[deg[i]]++;

    if(cnt.size()==1){
        if(cnt[1]==2 and n==2)cout<<"bus topology";
        else if(cnt[2])cout<<"ring topology";
        else    cout<<"unknown topology";
    }
    else if(cnt.size()==2){
        if(cnt[1] and cnt[2])cout<<"bus topology";
        else   if(cnt[n-1] and cnt[1])cout<<"star topology";
        else    cout<<"unknown topology";
    }
    else    cout<<"unknown topology";
    cout<<el;


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

