//
// Created by ahmedkashkoush on 9/15/23.
//https://cses.fi/problemset/task/1617

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
ll fastPower(ll pow){
    ll res=1;
    ll base=2;
    while(pow){
        if(pow&1)res=(res%mod * base%mod)%mod;
        base=(base%mod * base%mod)%mod;
        pow>>=1;
    }
    return res;
}
void solve(){
    ll n; cin>>n;
    cout<<fastPower(n);
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
