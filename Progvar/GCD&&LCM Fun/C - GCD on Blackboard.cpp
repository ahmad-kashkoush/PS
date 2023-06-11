//
// Created by ak on 6/1/23.
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
    int a[n];
    int pre[n], suf[n];
    cin>>a[0];
    pre[0]=a[0];
    for(int i=1;i<n;i++) {
        cin >> a[i];
        pre[i] = __gcd(a[i], pre[i - 1]);
    }

    suf[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
        suf[i]=__gcd(a[i], suf[i+1]);

    int ans=1;
    for(int i=0;i<n;i++){
        if(i==0)ans=max(ans, suf[i+1]);
        else if(i==n-1)ans=max(ans,pre[i-1]);
        else ans=max(ans, gcd(pre[i-1], suf[i+1]));
    }
    cout<<ans;
}
int main() {
    judge();
    int t=1;
//    cin>>t;
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

