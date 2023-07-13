//
// Created by ak on 6/14/23.
//https://atcoder.jp/contests/abc152/tasks/abc152_e
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
ll sm(ll a, ll b){
    return ( (a%mod)+ (b%mod))%mod;
}
ll mul(ll a, ll b){
    return ((a%mod) * (b%mod))%mod;
}
ll GCD(ll a, ll b){
    if(b==0)return a;
    return GCD(b, a%b);
}
ll FastPower(ll a, ll b){
    ll ret=1;
    while(b>0){
        if(b&1)ret=mul(a, ret);
        b>>=1;
        a=mul(a, a);
    }
    return ret;
}

void solve(){
    int n; cin>>n;
   int a[n+1];
   map<int, int> times;
    for(int i=1;i<=n;i++){
        cin>>a[i];
       int tmp=a[i];
       for(int j=2;j*j<=tmp;j++){
           int cc=0;
           while(tmp and tmp%j==0)
               cc++, tmp/=j;
           if(cc){
               times[j]=max(times[j], cc);
           }
       }
       if(tmp>1)
           times[tmp]=max(times[tmp], 1);
    }
    ll LCM=1;   ll sum=0;
   for(auto [prm, pwr]: times)LCM=mul(LCM, FastPower(prm, pwr));
   for(int i=1;i<=n;i++)sum=sm(sum, mul(LCM, FastPower(a[i], mod-2)));
   cout<<sum;

}
int main() {
    judge();

    int t=1;
//    cin>>t;

    while(t--){
        solve();
//        cout<<el;
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

/*
 3
2 3 4---> 12
6 4 3--> 13
 1e5--> 1e18

 2 3 22-->
 prime[2]=1
 prime[3]=1
 prime[2]=2

    2^2*3^1=4*3=12

    AB=LCM
    (AB)%M=LCM%M
    little fermat therom--> B=a^(M-2)%mod;

 */