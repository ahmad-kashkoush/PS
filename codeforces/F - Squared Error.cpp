//
// Created by ak on 6/29/23.
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
    int a[n+1];
    ll pre[n+1], sq[n+1];
    pre[0]=sq[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sq[i]=sq[i-1]+pow(a[i], 2);
       pre[i]=pre[i-1]+a[i];
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        ans+=(i-1)*pow(a[i], 2)+sq[i-1]-2*a[i]*pre[i-1];
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
