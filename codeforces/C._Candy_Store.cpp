//
// Created by ahmed-kashkoush on 3/27/23.
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
/*
 a[i]*b[i]== cost[i]--> d*b[i]
 a[i+1]*b[i+1]==cost[i+1]
 .
 .
 .
 a[n]*b[n]==cost[n]
 what He wants?
 1. cost that can be get from every a[i]*b[i]
 How?
 cost =d[i]*b[i]
 so cost must be Lcm of(b)
 a[i]%d[i]==0
 so (a[i]*b[i])%(d[i]*b[i]==0
 so (a[i]*b[i])%cost[i]==0
 and cost%lcm==0
 then gcd%lcm must be 0;
 so we want gcd of every (a[i]*b[i])%lcm(b[i])=0
 else ans++, start new prefix





  */

void solve(){
    int n; cin>>n;
    ll Gcd=1, Lcm=2;
    ll ans=0;
    while(n--){
        ll a, b;cin>>a>>b;
        Gcd=__gcd(Gcd, a*b);
        Lcm=lcm(Lcm, b);
        if(Gcd%Lcm!=0){
            ans++;
            Gcd=a*b, Lcm=b;
        }
    }
    cout<<ans;

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
