//
// Created by ak on 9/5/23.
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
    ll a[n];
    cin(a);
    ll pre[n];
    pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]=__gcd(pre[i-1], a[i]);
//        cout<<a[i]<<" ";
    }
    ll suf[n];
    suf[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]=__gcd(suf[i+1], a[i]);
    }
    ll ans=max(suf[1], pre[n-2]);
    for(int i=1;i<n-1;i++)
        ans=max(ans, __gcd(suf[i+1], pre[i-1]));
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
