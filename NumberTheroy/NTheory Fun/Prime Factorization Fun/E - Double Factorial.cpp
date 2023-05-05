//
// Created by ak on 5/4/23.
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
/*
    seq1------------> 5 25 125 625 3125 15625 78125 390625
    seq2=seq1*2----> 10 50 250 1250 6250 31250 156250 781250
    seq2 have zeros
    so we first sum 10's, 50's, and so on

    e.g.
    let x be 100
    values that will increment answer
    90*80*70*....*10--> 10 zeros --> equal to n/10
    100*50-->3 zeros-1 zero because of repeated 50-->n/50=2zeros
    ans=2zeros+10zeros=12zeros;

 */
void solve(){
    ll n; cin>>n;
    if(n&1)return void(cout<<0<<el);
    ll fives=5;
    ll ans=0;
    while(fives<n){
        ans+=n/(fives*2);
        cout<<fives*2<<" ";
        fives*=5;
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

