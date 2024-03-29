//
// Created by ak on 5/5/23.
//https://atcoder.jp/contests/abc169/tasks/abc169_d
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
    ll n; cin>>n;
    ll tmp=n;
    map<ll, ll> mp; // [prime, power of it]
    for(ll i=2;i*i<=n;i++){
        while(n%i==0){
            mp[i]++;
            n/=i;
        }
    }
    if(n!=1)mp[n]++;
    n=tmp;
    ll ans=0;
    int cnt=0;
    for(auto [p, f]:mp){
        ll i=1, x=f;
        while(i<=x){
            ans++;
            x-=i;
            i++;
        }

    }

    cout<<"Complexity: "<<cnt<<el;
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
