//
// Created by ahmedkashkoush on 9/20/23.
//https://codeforces.com/problemset/problem/844/B
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
    int arr[n][m];
    ll ans=0;
    for(int i=0;i<n;i++){
        int zero=0, one=0;
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            zero+=(!arr[i][j]);
            one+=arr[i][j];
        }
        ans+=(1LL<<zero)-1;
        ans+=(1LL<<one)-1;
    }
    for(int j=0;j<m;j++){
        int zero=0, one=0;
        for(int i=0;i<n;i++){
            one+=arr[i][j];
            zero+=(!arr[i][j]);
        }
        ans+=(1LL<<zero)-1;
        ans+=(1LL<<one)-1;
    }
    cout<<ans-n*m;
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

