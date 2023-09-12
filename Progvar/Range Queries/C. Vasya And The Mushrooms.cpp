//
// Created by ahmedkashkoush on 9/11/23.
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
void solve(){
    int n; cin>>n;
    vector<ll> a(n+1, 0), b(n+1, 0);
    vector<ll> aa(n+2, 0), bb(n+2, 0), sum(n+2, 0);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    // create some suffixes
    for(int i=n;i>=1;i--){
        ll t=(n-i+1)*2-1;
        aa[i]=aa[i+1]+sum[i+1]+t*a[i];
        bb[i]=bb[i+1]+sum[i+1]+t*b[i];
        sum[i]=sum[i+1]+a[i]+b[i];
    }
    // dp
    ll ans=0, before=0;
    for(int i=1;i<=n;i++){
        ll t=2*(i-1);
        if(i&1){// take first row
            ans=max(ans, before+bb[i]+sum[i]*t);
            before+=a[i]*t+b[i]*(t+1);
        }else{
            ans=max(ans, before+aa[i]+sum[i]*t);
            before+=b[i]*t+a[i]*(t+1);
        }
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
