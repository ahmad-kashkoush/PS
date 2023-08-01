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
    int n, m; cin>>n>>m;
    int h[n];cin(h);
    vector<bool> good(n, true);
    for(int i=1;i<=m;i++){
        int a, b; cin>>a>>b;
        --a, --b;
        if(h[a]<=h[b])good[a]=false;
        if(h[b]<=h[a])good[b]=false;
    }
    int ans=0;
    for(auto i:good)ans+=i;
    cout<<ans<<el;

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
