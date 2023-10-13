//
// Created by ahmedkashkoush on 9/20/23.
//https://codeforces.com/problemset/problem/1084/C
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
ll mul(ll a, ll b){return ((a%mod)* (b%mod))%mod;}
ll add(ll a, ll b){return ((a%mod) + (b%mod))%mod;}
ll sub(ll a, ll b){return ( (a%mod)- (b%mod) + mod)%mod;}
void solve(){
    string s; cin>>s;
    ll ans=0, extra=0;
    for(char c:s){
        if(c=='a')ans=add(ans+1, extra);
        else if(c=='b') extra=ans;
    }
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

