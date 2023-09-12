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
    vector<ll> a(n);
    vector<ll> pre(n+1,0);
    cin(a);
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;i++) {
        pre[i+1] = pre[i] + a[i];
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        ans+= a[i-1]*(n-i)-(pre[n]-pre[i]);
//        cout<<"ans:"<<ans<<el;
//    cout<<"a[i-1] : "<<a[i-1]<<el;
//    for(int j=n;j>=i;j--)cout<<a[j-1]<<" ";
//    cout<<el;
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
