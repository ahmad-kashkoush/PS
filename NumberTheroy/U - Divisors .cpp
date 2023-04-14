//
// Created by ak on 4/12/23.
//https://vj.csgrandeur.cn/828b89e6df32b97c81cb0535ecdbaadd?v=1680814714
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
ll nDivisors(ll n){
    ll num=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            num++;
            if(n/i!=i)num++;
        }
    }
    return num;
}
map<ll, ll> mp;
void solve(){
        ll l, h; cin>>l>>h;
        ll ans=0, divisors=0;
        for(ll i=l;i<=h;i++){
//            if(!mp.count(i))mp[i]= nDivisors(i);
                mp[i]=nDivisors(i);
            if(divisors<mp[i]){
                ans=i;
                divisors=mp[i];
            }
        }
   cout<< "Between "<<l<<" and "<<h<<", "<<ans<<" has a maximum of "<<divisors<<" divisors.";

}
int main() {
    judge();
    int t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<el;
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

