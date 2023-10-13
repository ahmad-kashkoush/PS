//
// Created by ahmedkashkoush on 9/24/23.
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
ll sum(ll a, ll b){
    return ((a%mod)+(b%mod))%mod;
}
ll mul(ll a, ll b){
    return ((a%mod)*(b%mod))%mod;
}
ll fastpower(ll base, ll p){
    ll res=1;
    while(p>0){
        if(p&1)
            res=mul(base, res);
        base=mul(base, base);
        p>>=1;
    }
    return res;
}

void solve(){
    string s; cin>>s;
    int k; cin>>k;

    ll x=0;
    ll len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]=='0' or s[i]=='5') {
            x=sum(x, fastpower(2, i));
        }
    }
    // ans=x*[
    ll tmp=fastpower(2, k*len)-1;
    tmp*=fastpower(fastpower(2, len)-1, mod-2)%mod;
    cout<<mul(x, tmp);
}
int main() {
    judge();
    int t=1;
//    cin>>t;
    while(t--){
        solve();
//    cout<<fastpower(3, 3);
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
