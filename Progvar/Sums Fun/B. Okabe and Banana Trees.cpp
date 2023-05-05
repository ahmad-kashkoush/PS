//
// Created by ak on 4/28/23.
//https://codeforces.com/contest/821/problem/B
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
    ll m, b; cin>>m>>b;
    ll ans=0;
    for(ll y=0;y<=b;y++){
        ll x=(b-y)*m;
        ll cur=(x+1)*y*(y+1)/2;
           cur+=(y+1)*x*(x+1)/2;
       ans=max(ans, cur);
    }
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

