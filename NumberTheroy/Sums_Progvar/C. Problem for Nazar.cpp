//
// Created by ak on 4/28/23.
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
const int mod = 1e9 + 7;
ll add(ll a, ll b){return ((a%mod)+(b%mod))%mod;}
ll mul(ll a, ll b){return ((a%mod)*(b%mod))%mod;}
ll fx(ll j){
    ll odd=0, even=0;

    for(int i=0;j>0;i++){
        ll dec=(j>=(1LL<<i)?(1LL<<i):j);
        j-=dec;
        if(i&1)even=add(even, dec);
        else   odd=add(odd, dec);

//        cout<<" j: "<<j<<" dec: "<<dec<<" odd: "<<odd<<" even: "<<even<<el;
//        cout<<j<<" "<<i<<" odd:"<<odd<<" even: "<<even<<el;
    }

    return add(mul(odd, odd), mul(even, even+1));



}
void solve(){
    ll l, r;cin>>l>>r;
    cout<<(fx(r)-fx(l-1)+mod)%mod;

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
