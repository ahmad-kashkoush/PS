//
// Created by ahmedkashkoush on 9/9/23.
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
    ll pre[n+1], arr[n+1], mx[n+1], prePre[n+1];
    pre[0]=mx[0]=prePre[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pre[i]=arr[i]+pre[i-1];
        mx[i]=max(mx[i-1], pre[i]);

    }
    ll ans=0;
    ll point=0;
    for(int i=1;i<=n;i++){
//        for(int j=1;j<=i;j++){
//            point+=arr[j];
//            ans=max(point, ans);
//      }
        ans=max({ans, point+mx[i], point+pre[i]});
        point+=pre[i];
//        cout<<ans<<" "<<point<<el;
    }
    cout<<ans;

}
int main() {
    judge();
    int t=1;
//    cin>>t;
//cout<<"Hello";
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
